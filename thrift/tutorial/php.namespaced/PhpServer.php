#!/usr/bin/env php
<?php
/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

namespace MyApp\Server;

use MyApp\Handler\CalculatorHandler;
use TBinaryProtocol;
use TBufferedTransport;
use TPhpStream;
use tutorial\CalculatorProcessor;

//composer autoloading
$loader = require __DIR__.'/vendor/autoload.php';
//the following global is only needed as it is required from within the php lib. its only set here for compatibility
//reasons
$GLOBALS['HACKLIB_ROOT'] = __DIR__.'/vendor/gyg/hhvm-h2tp-resources/src/hacklib.php';

if (php_sapi_name() == 'cli') {
  ini_set("display_errors", "stderr");
}

header('Content-Type', 'application/x-thrift');
if (php_sapi_name() == 'cli') {
  echo "\r\n";
}

$handler = new CalculatorHandler();
$processor = new CalculatorProcessor($handler);

$transport = new TBufferedTransport(new TPhpStream(TPhpStream::MODE_R | TPhpStream::MODE_W));
$protocol = new TBinaryProtocol($transport, true, true);

$transport->open();
$processor->process($protocol, $protocol);
$transport->close();

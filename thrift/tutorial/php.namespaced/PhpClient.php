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

namespace MyApp\Client;

use TBinaryProtocol;
use TBufferedTransport;
use TException;
use THttpClient;
use TSocket;
use tutorial\CalculatorClient;
use tutorial\InvalidOperation;
use tutorial\Operation;
use tutorial\Work;

$loader = require __DIR__.'/vendor/autoload.php';

try {
  if (array_search('--http', $argv)) {
    $socket = new THttpClient('localhost', 8080, '/php.namespaced/PhpServer.php','http', 'error_log');
  } else {
    $socket = new TSocket('localhost', 9090, false, 'error_log');
  }
  $transport = new TBufferedTransport($socket, 1024, 1024);
  $protocol = new TBinaryProtocol($transport);
  $client = new CalculatorClient($protocol);

  $transport->open();

  $client->ping();
  print "ping()\n";

  $sum = $client->add(1,1);
  print "1+1=$sum\n";

  $work = new Work();

  $work->op = Operation::DIVIDE;
  $work->num1 = 1;
  $work->num2 = 0;

  try {
    $client->calculate(1, $work);
    print "Whoa! We can divide by zero?\n";
  } catch (InvalidOperation $io) {
    print "InvalidOperation: $io->why\n";
  }

  $work->op = Operation::SUBTRACT;
  $work->num1 = 15;
  $work->num2 = 10;
  $diff = $client->calculate(1, $work);
  print "15-10=$diff\n";

  $log = $client->getStruct(1);
  print "Log: $log->value\n";

  $transport->close();

} catch (TException $tx) {
  print 'TException: '.$tx->getMessage()."\n";
}

?>

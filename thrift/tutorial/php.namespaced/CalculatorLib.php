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

namespace MyApp\Handler;


use tutorial\CalculatorIf;
use tutorial\InvalidOperation;
use tutorial\Operation;
use tutorial\SharedStruct;


class CalculatorHandler implements CalculatorIf {
  protected $log = array();

  public function ping() {
    error_log("ping()");
  }

  public function add($num1, $num2) {
    error_log("add({$num1}, {$num2})");
    return $num1 + $num2;
  }

  public function calculate($logid, $w) {
    error_log("calculate({$logid}, {{$w->op}, {$w->num1}, {$w->num2}})");
    switch ($w->op) {
      case Operation::ADD:
        $val = $w->num1 + $w->num2;
        break;
      case Operation::SUBTRACT:
        $val = $w->num1 - $w->num2;
        break;
      case Operation::MULTIPLY:
        $val = $w->num1 * $w->num2;
        break;
      case Operation::DIVIDE:
        if ($w->num2 == 0) {
          $io = new InvalidOperation();
          $io->what = $w->op;
          $io->why = "Cannot divide by 0";
          throw $io;
        }
        $val = $w->num1 / $w->num2;
        break;
      default:
        $io = new InvalidOperation();
        $io->what = $w->op;
        $io->why = "Invalid Operation";
        throw $io;
    }

    $log = new SharedStruct();
    $log->key = $logid;
    $log->value = (string)$val;
    $this->log[$logid] = $log;

    return $val;
  }

  public function getStruct($key) {
    error_log("getStruct({$key})");
    // This actually doesn't work because the PHP interpreter is
    // restarted for every request.
    //return $this->log[$key];
    return new SharedStruct(array("key" => $key,
                                   "value" => "PHP is stateless!"));
  }

  public function zip() {
    error_log("zip()");
  }

};

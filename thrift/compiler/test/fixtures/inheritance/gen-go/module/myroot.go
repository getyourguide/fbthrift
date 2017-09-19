// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"fmt"
	"git.apache.org/thrift.git/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = bytes.Equal

type MyRoot interface {
  DoRoot() (err error)
}

type MyRootClient struct {
  Transport thrift.TTransport
  ProtocolFactory thrift.TProtocolFactory
  InputProtocol thrift.TProtocol
  OutputProtocol thrift.TProtocol
  SeqId int32
}

func NewMyRootClientFactory(t thrift.TTransport, f thrift.TProtocolFactory) *MyRootClient {
  return &MyRootClient{Transport: t,
    ProtocolFactory: f,
    InputProtocol: f.GetProtocol(t),
    OutputProtocol: f.GetProtocol(t),
    SeqId: 0,
  }
}

func NewMyRootClientProtocol(t thrift.TTransport, iprot thrift.TProtocol, oprot thrift.TProtocol) *MyRootClient {
  return &MyRootClient{Transport: t,
    ProtocolFactory: nil,
    InputProtocol: iprot,
    OutputProtocol: oprot,
    SeqId: 0,
  }
}

func (p *MyRootClient) DoRoot() (err error) {
  if err = p.sendDoRoot(); err != nil { return }
  return p.recvDoRoot()
}

func (p *MyRootClient) sendDoRoot()(err error) {
  oprot := p.OutputProtocol
  if oprot == nil {
    oprot = p.ProtocolFactory.GetProtocol(p.Transport)
    p.OutputProtocol = oprot
  }
  p.SeqId++
  if err = oprot.WriteMessageBegin("do_root", thrift.CALL, p.SeqId); err != nil {
      return
  }
  args := MyRootDoRootArgs{
  }
  if err = args.Write(oprot); err != nil {
      return
  }
  if err = oprot.WriteMessageEnd(); err != nil {
      return
  }
  return oprot.Flush()
}


func (p *MyRootClient) recvDoRoot() (err error) {
  iprot := p.InputProtocol
  if iprot == nil {
    iprot = p.ProtocolFactory.GetProtocol(p.Transport)
    p.InputProtocol = iprot
  }
  method, mTypeId, seqId, err := iprot.ReadMessageBegin()
  if err != nil {
    return
  }
  if method != "do_root" {
    err = thrift.NewTApplicationException(thrift.WRONG_METHOD_NAME, "do_root failed: wrong method name")
    return
  }
  if p.SeqId != seqId {
    err = thrift.NewTApplicationException(thrift.BAD_SEQUENCE_ID, "do_root failed: out of sequence response")
    return
  }
  if mTypeId == thrift.EXCEPTION {
    error0 := thrift.NewTApplicationException(thrift.UNKNOWN_APPLICATION_EXCEPTION, "Unknown Exception")
    var error1 error
    error1, err = error0.Read(iprot)
    if err != nil {
      return
    }
    if err = iprot.ReadMessageEnd(); err != nil {
      return
    }
    err = error1
    return
  }
  if mTypeId != thrift.REPLY {
    err = thrift.NewTApplicationException(thrift.INVALID_MESSAGE_TYPE_EXCEPTION, "do_root failed: invalid message type")
    return
  }
  result := MyRootDoRootResult{}
  if err = result.Read(iprot); err != nil {
    return
  }
  if err = iprot.ReadMessageEnd(); err != nil {
    return
  }
  return
}


type MyRootProcessor struct {
  processorMap map[string]thrift.TProcessorFunction
  handler MyRoot
}

func (p *MyRootProcessor) AddToProcessorMap(key string, processor thrift.TProcessorFunction) {
  p.processorMap[key] = processor
}

func (p *MyRootProcessor) GetProcessorFunction(key string) (processor thrift.TProcessorFunction, ok bool) {
  processor, ok = p.processorMap[key]
  return processor, ok
}

func (p *MyRootProcessor) ProcessorMap() map[string]thrift.TProcessorFunction {
  return p.processorMap
}

func NewMyRootProcessor(handler MyRoot) *MyRootProcessor {

  self2 := &MyRootProcessor{handler:handler, processorMap:make(map[string]thrift.TProcessorFunction)}
  self2.processorMap["do_root"] = &myRootProcessorDoRoot{handler:handler}
return self2
}

func (p *MyRootProcessor) Process(iprot, oprot thrift.TProtocol) (success bool, err thrift.TException) {
  name, _, seqId, err := iprot.ReadMessageBegin()
  if err != nil { return false, err }
  if processor, ok := p.GetProcessorFunction(name); ok {
    return processor.Process(seqId, iprot, oprot)
  }
  iprot.Skip(thrift.STRUCT)
  iprot.ReadMessageEnd()
  x3 := thrift.NewTApplicationException(thrift.UNKNOWN_METHOD, "Unknown function " + name)
  oprot.WriteMessageBegin(name, thrift.EXCEPTION, seqId)
  x3.Write(oprot)
  oprot.WriteMessageEnd()
  oprot.Flush()
  return false, x3

}

type myRootProcessorDoRoot struct {
  handler MyRoot
}

func (p *myRootProcessorDoRoot) Process(seqId int32, iprot, oprot thrift.TProtocol) (success bool, err thrift.TException) {
  args := MyRootDoRootArgs{}
  if err = args.Read(iprot); err != nil {
    iprot.ReadMessageEnd()
    x := thrift.NewTApplicationException(thrift.PROTOCOL_ERROR, err.Error())
    oprot.WriteMessageBegin("do_root", thrift.EXCEPTION, seqId)
    x.Write(oprot)
    oprot.WriteMessageEnd()
    oprot.Flush()
    return false, err
  }

  iprot.ReadMessageEnd()
  result := MyRootDoRootResult{}
  var err2 error
  if err2 = p.handler.DoRoot(); err2 != nil {
    x := thrift.NewTApplicationException(thrift.INTERNAL_ERROR, "Internal error processing do_root: " + err2.Error())
    oprot.WriteMessageBegin("do_root", thrift.EXCEPTION, seqId)
    x.Write(oprot)
    oprot.WriteMessageEnd()
    oprot.Flush()
    return true, err2
  }
  if err2 = oprot.WriteMessageBegin("do_root", thrift.REPLY, seqId); err2 != nil {
    err = err2
  }
  if err2 = result.Write(oprot); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.Flush(); err == nil && err2 != nil {
    err = err2
  }
  if err != nil {
    return
  }
  return true, err
}


// HELPER FUNCTIONS AND STRUCTURES

type MyRootDoRootArgs struct {
}

func NewMyRootDoRootArgs() *MyRootDoRootArgs {
  return &MyRootDoRootArgs{}
}

func (p *MyRootDoRootArgs) Read(iprot thrift.TProtocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *MyRootDoRootArgs) Write(oprot thrift.TProtocol) error {
  if err := oprot.WriteStructBegin("do_root_args"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyRootDoRootArgs) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("MyRootDoRootArgs(%+v)", *p)
}

type MyRootDoRootResult struct {
}

func NewMyRootDoRootResult() *MyRootDoRootResult {
  return &MyRootDoRootResult{}
}

func (p *MyRootDoRootResult) Read(iprot thrift.TProtocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *MyRootDoRootResult) Write(oprot thrift.TProtocol) error {
  if err := oprot.WriteStructBegin("do_root_result"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyRootDoRootResult) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("MyRootDoRootResult(%+v)", *p)
}



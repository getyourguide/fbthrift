package test.fixtures.inheritance;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;

@ThriftService("MyNode")
public interface MyNode extends test.fixtures.inheritance.MyRoot
{
    @ThriftService("MyNode")
    public interface Async extends test.fixtures.inheritance.MyRoot.Async
    {
        @ThriftMethod(value = "do_mid")
        ListenableFuture<Void> doMid(
        );
    }
    @ThriftMethod(value = "do_mid")
    void doMid(
    );

}

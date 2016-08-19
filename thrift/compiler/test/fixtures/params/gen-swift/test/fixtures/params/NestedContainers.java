package test.fixtures.params;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;

@ThriftService("NestedContainers")
public interface NestedContainers
{
    @ThriftService("NestedContainers")
    public interface Async
    {
        @ThriftMethod(value = "mapList")
        ListenableFuture<Void> mapList(
            @ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, List<Integer>> foo
        );

        @ThriftMethod(value = "mapSet")
        ListenableFuture<Void> mapSet(
            @ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, Set<Integer>> foo
        );

        @ThriftMethod(value = "listMap")
        ListenableFuture<Void> listMap(
            @ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Map<Integer, Integer>> foo
        );

        @ThriftMethod(value = "listSet")
        ListenableFuture<Void> listSet(
            @ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Set<Integer>> foo
        );

        @ThriftMethod(value = "turtles")
        ListenableFuture<Void> turtles(
            @ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo
        );
    }
    @ThriftMethod(value = "mapList")
    void mapList(
        @ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, List<Integer>> foo
    );


    @ThriftMethod(value = "mapSet")
    void mapSet(
        @ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final Map<Integer, Set<Integer>> foo
    );


    @ThriftMethod(value = "listMap")
    void listMap(
        @ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Map<Integer, Integer>> foo
    );


    @ThriftMethod(value = "listSet")
    void listSet(
        @ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<Set<Integer>> foo
    );


    @ThriftMethod(value = "turtles")
    void turtles(
        @ThriftField(value=1, name="foo", requiredness=Requiredness.NONE) final List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo
    );

}

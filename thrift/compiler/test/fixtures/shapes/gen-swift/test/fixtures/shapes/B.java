package test.fixtures.shapes;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@ThriftStruct("B")
public final class B
{
    @ThriftConstructor
    public B(
        @ThriftField(value=1, name="just_an_A", requiredness=Requiredness.NONE) final test.fixtures.shapes.A justAnA,
        @ThriftField(value=2, name="set_of_i32", requiredness=Requiredness.NONE) final Set<Integer> setOfI32,
        @ThriftField(value=3, name="list_of_i32", requiredness=Requiredness.NONE) final List<Integer> listOfI32,
        @ThriftField(value=4, name="list_of_string", requiredness=Requiredness.NONE) final List<String> listOfString,
        @ThriftField(value=5, name="map_of_string_to_i32", requiredness=Requiredness.NONE) final Map<String, Integer> mapOfStringToI32,
        @ThriftField(value=6, name="map_of_string_to_A", requiredness=Requiredness.NONE) final Map<String, test.fixtures.shapes.A> mapOfStringToA,
        @ThriftField(value=7, name="map_of_string_to_list_of_i32", requiredness=Requiredness.NONE) final Map<String, List<Integer>> mapOfStringToListOfI32,
        @ThriftField(value=8, name="map_of_string_to_list_of_A", requiredness=Requiredness.NONE) final Map<String, List<test.fixtures.shapes.A>> mapOfStringToListOfA,
        @ThriftField(value=9, name="map_of_string_to_set_of_i32", requiredness=Requiredness.NONE) final Map<String, Set<Integer>> mapOfStringToSetOfI32,
        @ThriftField(value=10, name="map_of_string_to_map_of_string_to_i32", requiredness=Requiredness.NONE) final Map<String, Map<String, Integer>> mapOfStringToMapOfStringToI32,
        @ThriftField(value=11, name="map_of_string_to_map_of_string_to_A", requiredness=Requiredness.NONE) final Map<String, Map<String, test.fixtures.shapes.A>> mapOfStringToMapOfStringToA,
        @ThriftField(value=12, name="list_of_set_of_i32", requiredness=Requiredness.NONE) final List<Set<Integer>> listOfSetOfI32,
        @ThriftField(value=13, name="list_of_map_of_string_to_list_of_A", requiredness=Requiredness.NONE) final List<Map<String, List<test.fixtures.shapes.A>>> listOfMapOfStringToListOfA,
        @ThriftField(value=14, name="list_of_map_of_string_to_A", requiredness=Requiredness.NONE) final List<Map<String, test.fixtures.shapes.A>> listOfMapOfStringToA,
        @ThriftField(value=15, name="list_of_self", requiredness=Requiredness.NONE) final List<test.fixtures.shapes.B> listOfSelf,
        @ThriftField(value=16, name="map_of_string_to_self", requiredness=Requiredness.NONE) final Map<String, test.fixtures.shapes.B> mapOfStringToSelf,
        @ThriftField(value=17, name="just_an_enum", requiredness=Requiredness.NONE) final test.fixtures.shapes.Enum justAnEnum,
        @ThriftField(value=51, name="optional_just_an_A", requiredness=Requiredness.OPTIONAL) final test.fixtures.shapes.A optionalJustAnA,
        @ThriftField(value=52, name="optional_set_of_i32", requiredness=Requiredness.OPTIONAL) final Set<Integer> optionalSetOfI32,
        @ThriftField(value=53, name="optional_list_of_i32", requiredness=Requiredness.OPTIONAL) final List<Integer> optionalListOfI32,
        @ThriftField(value=54, name="optional_list_of_string", requiredness=Requiredness.OPTIONAL) final List<String> optionalListOfString,
        @ThriftField(value=55, name="optional_map_of_string_to_i32", requiredness=Requiredness.OPTIONAL) final Map<String, Integer> optionalMapOfStringToI32,
        @ThriftField(value=56, name="optional_map_of_string_to_A", requiredness=Requiredness.OPTIONAL) final Map<String, test.fixtures.shapes.A> optionalMapOfStringToA,
        @ThriftField(value=57, name="optional_map_of_string_to_list_of_i32", requiredness=Requiredness.OPTIONAL) final Map<String, List<Integer>> optionalMapOfStringToListOfI32,
        @ThriftField(value=58, name="optional_map_of_string_to_list_of_A", requiredness=Requiredness.OPTIONAL) final Map<String, List<test.fixtures.shapes.A>> optionalMapOfStringToListOfA,
        @ThriftField(value=59, name="optional_map_of_string_to_set_of_i32", requiredness=Requiredness.OPTIONAL) final Map<String, Set<Integer>> optionalMapOfStringToSetOfI32,
        @ThriftField(value=60, name="optional_enum", requiredness=Requiredness.OPTIONAL) final test.fixtures.shapes.Enum optionalEnum
    ) {
        this.justAnA = justAnA;
        this.setOfI32 = setOfI32;
        this.listOfI32 = listOfI32;
        this.listOfString = listOfString;
        this.mapOfStringToI32 = mapOfStringToI32;
        this.mapOfStringToA = mapOfStringToA;
        this.mapOfStringToListOfI32 = mapOfStringToListOfI32;
        this.mapOfStringToListOfA = mapOfStringToListOfA;
        this.mapOfStringToSetOfI32 = mapOfStringToSetOfI32;
        this.mapOfStringToMapOfStringToI32 = mapOfStringToMapOfStringToI32;
        this.mapOfStringToMapOfStringToA = mapOfStringToMapOfStringToA;
        this.listOfSetOfI32 = listOfSetOfI32;
        this.listOfMapOfStringToListOfA = listOfMapOfStringToListOfA;
        this.listOfMapOfStringToA = listOfMapOfStringToA;
        this.listOfSelf = listOfSelf;
        this.mapOfStringToSelf = mapOfStringToSelf;
        this.justAnEnum = justAnEnum;
        this.optionalJustAnA = optionalJustAnA;
        this.optionalSetOfI32 = optionalSetOfI32;
        this.optionalListOfI32 = optionalListOfI32;
        this.optionalListOfString = optionalListOfString;
        this.optionalMapOfStringToI32 = optionalMapOfStringToI32;
        this.optionalMapOfStringToA = optionalMapOfStringToA;
        this.optionalMapOfStringToListOfI32 = optionalMapOfStringToListOfI32;
        this.optionalMapOfStringToListOfA = optionalMapOfStringToListOfA;
        this.optionalMapOfStringToSetOfI32 = optionalMapOfStringToSetOfI32;
        this.optionalEnum = optionalEnum;
    }

    public static class Builder {
        private test.fixtures.shapes.A justAnA;

        public Builder setJustAnA(test.fixtures.shapes.A justAnA) {
            this.justAnA = justAnA;
            return this;
        }
        private Set<Integer> setOfI32;

        public Builder setSetOfI32(Set<Integer> setOfI32) {
            this.setOfI32 = setOfI32;
            return this;
        }
        private List<Integer> listOfI32;

        public Builder setListOfI32(List<Integer> listOfI32) {
            this.listOfI32 = listOfI32;
            return this;
        }
        private List<String> listOfString;

        public Builder setListOfString(List<String> listOfString) {
            this.listOfString = listOfString;
            return this;
        }
        private Map<String, Integer> mapOfStringToI32;

        public Builder setMapOfStringToI32(Map<String, Integer> mapOfStringToI32) {
            this.mapOfStringToI32 = mapOfStringToI32;
            return this;
        }
        private Map<String, test.fixtures.shapes.A> mapOfStringToA;

        public Builder setMapOfStringToA(Map<String, test.fixtures.shapes.A> mapOfStringToA) {
            this.mapOfStringToA = mapOfStringToA;
            return this;
        }
        private Map<String, List<Integer>> mapOfStringToListOfI32;

        public Builder setMapOfStringToListOfI32(Map<String, List<Integer>> mapOfStringToListOfI32) {
            this.mapOfStringToListOfI32 = mapOfStringToListOfI32;
            return this;
        }
        private Map<String, List<test.fixtures.shapes.A>> mapOfStringToListOfA;

        public Builder setMapOfStringToListOfA(Map<String, List<test.fixtures.shapes.A>> mapOfStringToListOfA) {
            this.mapOfStringToListOfA = mapOfStringToListOfA;
            return this;
        }
        private Map<String, Set<Integer>> mapOfStringToSetOfI32;

        public Builder setMapOfStringToSetOfI32(Map<String, Set<Integer>> mapOfStringToSetOfI32) {
            this.mapOfStringToSetOfI32 = mapOfStringToSetOfI32;
            return this;
        }
        private Map<String, Map<String, Integer>> mapOfStringToMapOfStringToI32;

        public Builder setMapOfStringToMapOfStringToI32(Map<String, Map<String, Integer>> mapOfStringToMapOfStringToI32) {
            this.mapOfStringToMapOfStringToI32 = mapOfStringToMapOfStringToI32;
            return this;
        }
        private Map<String, Map<String, test.fixtures.shapes.A>> mapOfStringToMapOfStringToA;

        public Builder setMapOfStringToMapOfStringToA(Map<String, Map<String, test.fixtures.shapes.A>> mapOfStringToMapOfStringToA) {
            this.mapOfStringToMapOfStringToA = mapOfStringToMapOfStringToA;
            return this;
        }
        private List<Set<Integer>> listOfSetOfI32;

        public Builder setListOfSetOfI32(List<Set<Integer>> listOfSetOfI32) {
            this.listOfSetOfI32 = listOfSetOfI32;
            return this;
        }
        private List<Map<String, List<test.fixtures.shapes.A>>> listOfMapOfStringToListOfA;

        public Builder setListOfMapOfStringToListOfA(List<Map<String, List<test.fixtures.shapes.A>>> listOfMapOfStringToListOfA) {
            this.listOfMapOfStringToListOfA = listOfMapOfStringToListOfA;
            return this;
        }
        private List<Map<String, test.fixtures.shapes.A>> listOfMapOfStringToA;

        public Builder setListOfMapOfStringToA(List<Map<String, test.fixtures.shapes.A>> listOfMapOfStringToA) {
            this.listOfMapOfStringToA = listOfMapOfStringToA;
            return this;
        }
        private List<test.fixtures.shapes.B> listOfSelf;

        public Builder setListOfSelf(List<test.fixtures.shapes.B> listOfSelf) {
            this.listOfSelf = listOfSelf;
            return this;
        }
        private Map<String, test.fixtures.shapes.B> mapOfStringToSelf;

        public Builder setMapOfStringToSelf(Map<String, test.fixtures.shapes.B> mapOfStringToSelf) {
            this.mapOfStringToSelf = mapOfStringToSelf;
            return this;
        }
        private test.fixtures.shapes.Enum justAnEnum;

        public Builder setJustAnEnum(test.fixtures.shapes.Enum justAnEnum) {
            this.justAnEnum = justAnEnum;
            return this;
        }
        private test.fixtures.shapes.A optionalJustAnA;

        public Builder setOptionalJustAnA(test.fixtures.shapes.A optionalJustAnA) {
            this.optionalJustAnA = optionalJustAnA;
            return this;
        }
        private Set<Integer> optionalSetOfI32;

        public Builder setOptionalSetOfI32(Set<Integer> optionalSetOfI32) {
            this.optionalSetOfI32 = optionalSetOfI32;
            return this;
        }
        private List<Integer> optionalListOfI32;

        public Builder setOptionalListOfI32(List<Integer> optionalListOfI32) {
            this.optionalListOfI32 = optionalListOfI32;
            return this;
        }
        private List<String> optionalListOfString;

        public Builder setOptionalListOfString(List<String> optionalListOfString) {
            this.optionalListOfString = optionalListOfString;
            return this;
        }
        private Map<String, Integer> optionalMapOfStringToI32;

        public Builder setOptionalMapOfStringToI32(Map<String, Integer> optionalMapOfStringToI32) {
            this.optionalMapOfStringToI32 = optionalMapOfStringToI32;
            return this;
        }
        private Map<String, test.fixtures.shapes.A> optionalMapOfStringToA;

        public Builder setOptionalMapOfStringToA(Map<String, test.fixtures.shapes.A> optionalMapOfStringToA) {
            this.optionalMapOfStringToA = optionalMapOfStringToA;
            return this;
        }
        private Map<String, List<Integer>> optionalMapOfStringToListOfI32;

        public Builder setOptionalMapOfStringToListOfI32(Map<String, List<Integer>> optionalMapOfStringToListOfI32) {
            this.optionalMapOfStringToListOfI32 = optionalMapOfStringToListOfI32;
            return this;
        }
        private Map<String, List<test.fixtures.shapes.A>> optionalMapOfStringToListOfA;

        public Builder setOptionalMapOfStringToListOfA(Map<String, List<test.fixtures.shapes.A>> optionalMapOfStringToListOfA) {
            this.optionalMapOfStringToListOfA = optionalMapOfStringToListOfA;
            return this;
        }
        private Map<String, Set<Integer>> optionalMapOfStringToSetOfI32;

        public Builder setOptionalMapOfStringToSetOfI32(Map<String, Set<Integer>> optionalMapOfStringToSetOfI32) {
            this.optionalMapOfStringToSetOfI32 = optionalMapOfStringToSetOfI32;
            return this;
        }
        private test.fixtures.shapes.Enum optionalEnum;

        public Builder setOptionalEnum(test.fixtures.shapes.Enum optionalEnum) {
            this.optionalEnum = optionalEnum;
            return this;
        }

        public Builder() { }
        public Builder(B other) {
            this.justAnA = other.justAnA;
            this.setOfI32 = other.setOfI32;
            this.listOfI32 = other.listOfI32;
            this.listOfString = other.listOfString;
            this.mapOfStringToI32 = other.mapOfStringToI32;
            this.mapOfStringToA = other.mapOfStringToA;
            this.mapOfStringToListOfI32 = other.mapOfStringToListOfI32;
            this.mapOfStringToListOfA = other.mapOfStringToListOfA;
            this.mapOfStringToSetOfI32 = other.mapOfStringToSetOfI32;
            this.mapOfStringToMapOfStringToI32 = other.mapOfStringToMapOfStringToI32;
            this.mapOfStringToMapOfStringToA = other.mapOfStringToMapOfStringToA;
            this.listOfSetOfI32 = other.listOfSetOfI32;
            this.listOfMapOfStringToListOfA = other.listOfMapOfStringToListOfA;
            this.listOfMapOfStringToA = other.listOfMapOfStringToA;
            this.listOfSelf = other.listOfSelf;
            this.mapOfStringToSelf = other.mapOfStringToSelf;
            this.justAnEnum = other.justAnEnum;
            this.optionalJustAnA = other.optionalJustAnA;
            this.optionalSetOfI32 = other.optionalSetOfI32;
            this.optionalListOfI32 = other.optionalListOfI32;
            this.optionalListOfString = other.optionalListOfString;
            this.optionalMapOfStringToI32 = other.optionalMapOfStringToI32;
            this.optionalMapOfStringToA = other.optionalMapOfStringToA;
            this.optionalMapOfStringToListOfI32 = other.optionalMapOfStringToListOfI32;
            this.optionalMapOfStringToListOfA = other.optionalMapOfStringToListOfA;
            this.optionalMapOfStringToSetOfI32 = other.optionalMapOfStringToSetOfI32;
            this.optionalEnum = other.optionalEnum;
        }

        public B build() {
            return new B (
                this.justAnA,
                this.setOfI32,
                this.listOfI32,
                this.listOfString,
                this.mapOfStringToI32,
                this.mapOfStringToA,
                this.mapOfStringToListOfI32,
                this.mapOfStringToListOfA,
                this.mapOfStringToSetOfI32,
                this.mapOfStringToMapOfStringToI32,
                this.mapOfStringToMapOfStringToA,
                this.listOfSetOfI32,
                this.listOfMapOfStringToListOfA,
                this.listOfMapOfStringToA,
                this.listOfSelf,
                this.mapOfStringToSelf,
                this.justAnEnum,
                this.optionalJustAnA,
                this.optionalSetOfI32,
                this.optionalListOfI32,
                this.optionalListOfString,
                this.optionalMapOfStringToI32,
                this.optionalMapOfStringToA,
                this.optionalMapOfStringToListOfI32,
                this.optionalMapOfStringToListOfA,
                this.optionalMapOfStringToSetOfI32,
                this.optionalEnum
            );
        }
    }

    private final test.fixtures.shapes.A justAnA;

    @ThriftField(value=1, name="just_an_A", requiredness=Requiredness.NONE)
    public test.fixtures.shapes.A getJustAnA() { return justAnA; }

    private final Set<Integer> setOfI32;

    @ThriftField(value=2, name="set_of_i32", requiredness=Requiredness.NONE)
    public Set<Integer> getSetOfI32() { return setOfI32; }

    private final List<Integer> listOfI32;

    @ThriftField(value=3, name="list_of_i32", requiredness=Requiredness.NONE)
    public List<Integer> getListOfI32() { return listOfI32; }

    private final List<String> listOfString;

    @ThriftField(value=4, name="list_of_string", requiredness=Requiredness.NONE)
    public List<String> getListOfString() { return listOfString; }

    private final Map<String, Integer> mapOfStringToI32;

    @ThriftField(value=5, name="map_of_string_to_i32", requiredness=Requiredness.NONE)
    public Map<String, Integer> getMapOfStringToI32() { return mapOfStringToI32; }

    private final Map<String, test.fixtures.shapes.A> mapOfStringToA;

    @ThriftField(value=6, name="map_of_string_to_A", requiredness=Requiredness.NONE)
    public Map<String, test.fixtures.shapes.A> getMapOfStringToA() { return mapOfStringToA; }

    private final Map<String, List<Integer>> mapOfStringToListOfI32;

    @ThriftField(value=7, name="map_of_string_to_list_of_i32", requiredness=Requiredness.NONE)
    public Map<String, List<Integer>> getMapOfStringToListOfI32() { return mapOfStringToListOfI32; }

    private final Map<String, List<test.fixtures.shapes.A>> mapOfStringToListOfA;

    @ThriftField(value=8, name="map_of_string_to_list_of_A", requiredness=Requiredness.NONE)
    public Map<String, List<test.fixtures.shapes.A>> getMapOfStringToListOfA() { return mapOfStringToListOfA; }

    private final Map<String, Set<Integer>> mapOfStringToSetOfI32;

    @ThriftField(value=9, name="map_of_string_to_set_of_i32", requiredness=Requiredness.NONE)
    public Map<String, Set<Integer>> getMapOfStringToSetOfI32() { return mapOfStringToSetOfI32; }

    private final Map<String, Map<String, Integer>> mapOfStringToMapOfStringToI32;

    @ThriftField(value=10, name="map_of_string_to_map_of_string_to_i32", requiredness=Requiredness.NONE)
    public Map<String, Map<String, Integer>> getMapOfStringToMapOfStringToI32() { return mapOfStringToMapOfStringToI32; }

    private final Map<String, Map<String, test.fixtures.shapes.A>> mapOfStringToMapOfStringToA;

    @ThriftField(value=11, name="map_of_string_to_map_of_string_to_A", requiredness=Requiredness.NONE)
    public Map<String, Map<String, test.fixtures.shapes.A>> getMapOfStringToMapOfStringToA() { return mapOfStringToMapOfStringToA; }

    private final List<Set<Integer>> listOfSetOfI32;

    @ThriftField(value=12, name="list_of_set_of_i32", requiredness=Requiredness.NONE)
    public List<Set<Integer>> getListOfSetOfI32() { return listOfSetOfI32; }

    private final List<Map<String, List<test.fixtures.shapes.A>>> listOfMapOfStringToListOfA;

    @ThriftField(value=13, name="list_of_map_of_string_to_list_of_A", requiredness=Requiredness.NONE)
    public List<Map<String, List<test.fixtures.shapes.A>>> getListOfMapOfStringToListOfA() { return listOfMapOfStringToListOfA; }

    private final List<Map<String, test.fixtures.shapes.A>> listOfMapOfStringToA;

    @ThriftField(value=14, name="list_of_map_of_string_to_A", requiredness=Requiredness.NONE)
    public List<Map<String, test.fixtures.shapes.A>> getListOfMapOfStringToA() { return listOfMapOfStringToA; }

    private final List<test.fixtures.shapes.B> listOfSelf;

    @ThriftField(value=15, name="list_of_self", requiredness=Requiredness.NONE)
    public List<test.fixtures.shapes.B> getListOfSelf() { return listOfSelf; }

    private final Map<String, test.fixtures.shapes.B> mapOfStringToSelf;

    @ThriftField(value=16, name="map_of_string_to_self", requiredness=Requiredness.NONE)
    public Map<String, test.fixtures.shapes.B> getMapOfStringToSelf() { return mapOfStringToSelf; }

    private final test.fixtures.shapes.Enum justAnEnum;

    @ThriftField(value=17, name="just_an_enum", requiredness=Requiredness.NONE)
    public test.fixtures.shapes.Enum getJustAnEnum() { return justAnEnum; }

    private final test.fixtures.shapes.A optionalJustAnA;

    @ThriftField(value=51, name="optional_just_an_A", requiredness=Requiredness.OPTIONAL)
    public test.fixtures.shapes.A getOptionalJustAnA() { return optionalJustAnA; }

    private final Set<Integer> optionalSetOfI32;

    @ThriftField(value=52, name="optional_set_of_i32", requiredness=Requiredness.OPTIONAL)
    public Set<Integer> getOptionalSetOfI32() { return optionalSetOfI32; }

    private final List<Integer> optionalListOfI32;

    @ThriftField(value=53, name="optional_list_of_i32", requiredness=Requiredness.OPTIONAL)
    public List<Integer> getOptionalListOfI32() { return optionalListOfI32; }

    private final List<String> optionalListOfString;

    @ThriftField(value=54, name="optional_list_of_string", requiredness=Requiredness.OPTIONAL)
    public List<String> getOptionalListOfString() { return optionalListOfString; }

    private final Map<String, Integer> optionalMapOfStringToI32;

    @ThriftField(value=55, name="optional_map_of_string_to_i32", requiredness=Requiredness.OPTIONAL)
    public Map<String, Integer> getOptionalMapOfStringToI32() { return optionalMapOfStringToI32; }

    private final Map<String, test.fixtures.shapes.A> optionalMapOfStringToA;

    @ThriftField(value=56, name="optional_map_of_string_to_A", requiredness=Requiredness.OPTIONAL)
    public Map<String, test.fixtures.shapes.A> getOptionalMapOfStringToA() { return optionalMapOfStringToA; }

    private final Map<String, List<Integer>> optionalMapOfStringToListOfI32;

    @ThriftField(value=57, name="optional_map_of_string_to_list_of_i32", requiredness=Requiredness.OPTIONAL)
    public Map<String, List<Integer>> getOptionalMapOfStringToListOfI32() { return optionalMapOfStringToListOfI32; }

    private final Map<String, List<test.fixtures.shapes.A>> optionalMapOfStringToListOfA;

    @ThriftField(value=58, name="optional_map_of_string_to_list_of_A", requiredness=Requiredness.OPTIONAL)
    public Map<String, List<test.fixtures.shapes.A>> getOptionalMapOfStringToListOfA() { return optionalMapOfStringToListOfA; }

    private final Map<String, Set<Integer>> optionalMapOfStringToSetOfI32;

    @ThriftField(value=59, name="optional_map_of_string_to_set_of_i32", requiredness=Requiredness.OPTIONAL)
    public Map<String, Set<Integer>> getOptionalMapOfStringToSetOfI32() { return optionalMapOfStringToSetOfI32; }

    private final test.fixtures.shapes.Enum optionalEnum;

    @ThriftField(value=60, name="optional_enum", requiredness=Requiredness.OPTIONAL)
    public test.fixtures.shapes.Enum getOptionalEnum() { return optionalEnum; }

    @Override
    public String toString()
    {
        return toStringHelper(this)
            .add("justAnA", justAnA)
            .add("setOfI32", setOfI32)
            .add("listOfI32", listOfI32)
            .add("listOfString", listOfString)
            .add("mapOfStringToI32", mapOfStringToI32)
            .add("mapOfStringToA", mapOfStringToA)
            .add("mapOfStringToListOfI32", mapOfStringToListOfI32)
            .add("mapOfStringToListOfA", mapOfStringToListOfA)
            .add("mapOfStringToSetOfI32", mapOfStringToSetOfI32)
            .add("mapOfStringToMapOfStringToI32", mapOfStringToMapOfStringToI32)
            .add("mapOfStringToMapOfStringToA", mapOfStringToMapOfStringToA)
            .add("listOfSetOfI32", listOfSetOfI32)
            .add("listOfMapOfStringToListOfA", listOfMapOfStringToListOfA)
            .add("listOfMapOfStringToA", listOfMapOfStringToA)
            .add("listOfSelf", listOfSelf)
            .add("mapOfStringToSelf", mapOfStringToSelf)
            .add("justAnEnum", justAnEnum)
            .add("optionalJustAnA", optionalJustAnA)
            .add("optionalSetOfI32", optionalSetOfI32)
            .add("optionalListOfI32", optionalListOfI32)
            .add("optionalListOfString", optionalListOfString)
            .add("optionalMapOfStringToI32", optionalMapOfStringToI32)
            .add("optionalMapOfStringToA", optionalMapOfStringToA)
            .add("optionalMapOfStringToListOfI32", optionalMapOfStringToListOfI32)
            .add("optionalMapOfStringToListOfA", optionalMapOfStringToListOfA)
            .add("optionalMapOfStringToSetOfI32", optionalMapOfStringToSetOfI32)
            .add("optionalEnum", optionalEnum)
            .toString();
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        B other = (B)o;

        return
            Objects.equals(justAnA, other.justAnA) &&
            Objects.equals(setOfI32, other.setOfI32) &&
            Objects.equals(listOfI32, other.listOfI32) &&
            Objects.equals(listOfString, other.listOfString) &&
            Objects.equals(mapOfStringToI32, other.mapOfStringToI32) &&
            Objects.equals(mapOfStringToA, other.mapOfStringToA) &&
            Objects.equals(mapOfStringToListOfI32, other.mapOfStringToListOfI32) &&
            Objects.equals(mapOfStringToListOfA, other.mapOfStringToListOfA) &&
            Objects.equals(mapOfStringToSetOfI32, other.mapOfStringToSetOfI32) &&
            Objects.equals(mapOfStringToMapOfStringToI32, other.mapOfStringToMapOfStringToI32) &&
            Objects.equals(mapOfStringToMapOfStringToA, other.mapOfStringToMapOfStringToA) &&
            Objects.equals(listOfSetOfI32, other.listOfSetOfI32) &&
            Objects.equals(listOfMapOfStringToListOfA, other.listOfMapOfStringToListOfA) &&
            Objects.equals(listOfMapOfStringToA, other.listOfMapOfStringToA) &&
            Objects.equals(listOfSelf, other.listOfSelf) &&
            Objects.equals(mapOfStringToSelf, other.mapOfStringToSelf) &&
            Objects.equals(justAnEnum, other.justAnEnum) &&
            Objects.equals(optionalJustAnA, other.optionalJustAnA) &&
            Objects.equals(optionalSetOfI32, other.optionalSetOfI32) &&
            Objects.equals(optionalListOfI32, other.optionalListOfI32) &&
            Objects.equals(optionalListOfString, other.optionalListOfString) &&
            Objects.equals(optionalMapOfStringToI32, other.optionalMapOfStringToI32) &&
            Objects.equals(optionalMapOfStringToA, other.optionalMapOfStringToA) &&
            Objects.equals(optionalMapOfStringToListOfI32, other.optionalMapOfStringToListOfI32) &&
            Objects.equals(optionalMapOfStringToListOfA, other.optionalMapOfStringToListOfA) &&
            Objects.equals(optionalMapOfStringToSetOfI32, other.optionalMapOfStringToSetOfI32) &&
            Objects.equals(optionalEnum, other.optionalEnum);
    }

    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            justAnA,
            setOfI32,
            listOfI32,
            listOfString,
            mapOfStringToI32,
            mapOfStringToA,
            mapOfStringToListOfI32,
            mapOfStringToListOfA,
            mapOfStringToSetOfI32,
            mapOfStringToMapOfStringToI32,
            mapOfStringToMapOfStringToA,
            listOfSetOfI32,
            listOfMapOfStringToListOfA,
            listOfMapOfStringToA,
            listOfSelf,
            mapOfStringToSelf,
            justAnEnum,
            optionalJustAnA,
            optionalSetOfI32,
            optionalListOfI32,
            optionalListOfString,
            optionalMapOfStringToI32,
            optionalMapOfStringToA,
            optionalMapOfStringToListOfI32,
            optionalMapOfStringToListOfA,
            optionalMapOfStringToSetOfI32,
            optionalEnum
        });
    }
}

package test.fixtures.optionals;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@ThriftStruct("Person")
public final class Person
{
    @ThriftConstructor
    public Person(
        @ThriftField(value=1, name="id", requiredness=Requiredness.NONE) final long id,
        @ThriftField(value=2, name="name", requiredness=Requiredness.NONE) final String name,
        @ThriftField(value=3, name="age", requiredness=Requiredness.OPTIONAL) final Short age,
        @ThriftField(value=4, name="address", requiredness=Requiredness.OPTIONAL) final String address,
        @ThriftField(value=5, name="favoriteColor", requiredness=Requiredness.OPTIONAL) final test.fixtures.optionals.Color favoriteColor,
        @ThriftField(value=6, name="friends", requiredness=Requiredness.OPTIONAL) final Set<Long> friends,
        @ThriftField(value=7, name="bestFriend", requiredness=Requiredness.OPTIONAL) final Long bestFriend,
        @ThriftField(value=8, name="petNames", requiredness=Requiredness.OPTIONAL) final Map<test.fixtures.optionals.Animal, String> petNames,
        @ThriftField(value=9, name="afraidOfAnimal", requiredness=Requiredness.OPTIONAL) final test.fixtures.optionals.Animal afraidOfAnimal,
        @ThriftField(value=10, name="vehicles", requiredness=Requiredness.OPTIONAL) final List<test.fixtures.optionals.Vehicle> vehicles
    ) {
        this.id = id;
        this.name = name;
        this.age = age;
        this.address = address;
        this.favoriteColor = favoriteColor;
        this.friends = friends;
        this.bestFriend = bestFriend;
        this.petNames = petNames;
        this.afraidOfAnimal = afraidOfAnimal;
        this.vehicles = vehicles;
    }

    public static class Builder {
        private long id;

        public Builder setId(long id) {
            this.id = id;
            return this;
        }
        private String name;

        public Builder setName(String name) {
            this.name = name;
            return this;
        }
        private Short age;

        public Builder setAge(Short age) {
            this.age = age;
            return this;
        }
        private String address;

        public Builder setAddress(String address) {
            this.address = address;
            return this;
        }
        private test.fixtures.optionals.Color favoriteColor;

        public Builder setFavoriteColor(test.fixtures.optionals.Color favoriteColor) {
            this.favoriteColor = favoriteColor;
            return this;
        }
        private Set<Long> friends;

        public Builder setFriends(Set<Long> friends) {
            this.friends = friends;
            return this;
        }
        private Long bestFriend;

        public Builder setBestFriend(Long bestFriend) {
            this.bestFriend = bestFriend;
            return this;
        }
        private Map<test.fixtures.optionals.Animal, String> petNames;

        public Builder setPetNames(Map<test.fixtures.optionals.Animal, String> petNames) {
            this.petNames = petNames;
            return this;
        }
        private test.fixtures.optionals.Animal afraidOfAnimal;

        public Builder setAfraidOfAnimal(test.fixtures.optionals.Animal afraidOfAnimal) {
            this.afraidOfAnimal = afraidOfAnimal;
            return this;
        }
        private List<test.fixtures.optionals.Vehicle> vehicles;

        public Builder setVehicles(List<test.fixtures.optionals.Vehicle> vehicles) {
            this.vehicles = vehicles;
            return this;
        }

        public Builder() { }
        public Builder(Person other) {
            this.id = other.id;
            this.name = other.name;
            this.age = other.age;
            this.address = other.address;
            this.favoriteColor = other.favoriteColor;
            this.friends = other.friends;
            this.bestFriend = other.bestFriend;
            this.petNames = other.petNames;
            this.afraidOfAnimal = other.afraidOfAnimal;
            this.vehicles = other.vehicles;
        }

        public Person build() {
            return new Person (
                this.id,
                this.name,
                this.age,
                this.address,
                this.favoriteColor,
                this.friends,
                this.bestFriend,
                this.petNames,
                this.afraidOfAnimal,
                this.vehicles
            );
        }
    }

    private final long id;

    @ThriftField(value=1, name="id", requiredness=Requiredness.NONE)
    public long getId() { return id; }

    private final String name;

    @ThriftField(value=2, name="name", requiredness=Requiredness.NONE)
    public String getName() { return name; }

    private final Short age;

    @ThriftField(value=3, name="age", requiredness=Requiredness.OPTIONAL)
    public Short getAge() { return age; }

    private final String address;

    @ThriftField(value=4, name="address", requiredness=Requiredness.OPTIONAL)
    public String getAddress() { return address; }

    private final test.fixtures.optionals.Color favoriteColor;

    @ThriftField(value=5, name="favoriteColor", requiredness=Requiredness.OPTIONAL)
    public test.fixtures.optionals.Color getFavoriteColor() { return favoriteColor; }

    private final Set<Long> friends;

    @ThriftField(value=6, name="friends", requiredness=Requiredness.OPTIONAL)
    public Set<Long> getFriends() { return friends; }

    private final Long bestFriend;

    @ThriftField(value=7, name="bestFriend", requiredness=Requiredness.OPTIONAL)
    public Long getBestFriend() { return bestFriend; }

    private final Map<test.fixtures.optionals.Animal, String> petNames;

    @ThriftField(value=8, name="petNames", requiredness=Requiredness.OPTIONAL)
    public Map<test.fixtures.optionals.Animal, String> getPetNames() { return petNames; }

    private final test.fixtures.optionals.Animal afraidOfAnimal;

    @ThriftField(value=9, name="afraidOfAnimal", requiredness=Requiredness.OPTIONAL)
    public test.fixtures.optionals.Animal getAfraidOfAnimal() { return afraidOfAnimal; }

    private final List<test.fixtures.optionals.Vehicle> vehicles;

    @ThriftField(value=10, name="vehicles", requiredness=Requiredness.OPTIONAL)
    public List<test.fixtures.optionals.Vehicle> getVehicles() { return vehicles; }

    @Override
    public String toString()
    {
        return toStringHelper(this)
            .add("id", id)
            .add("name", name)
            .add("age", age)
            .add("address", address)
            .add("favoriteColor", favoriteColor)
            .add("friends", friends)
            .add("bestFriend", bestFriend)
            .add("petNames", petNames)
            .add("afraidOfAnimal", afraidOfAnimal)
            .add("vehicles", vehicles)
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

        Person other = (Person)o;

        return
            Objects.equals(id, other.id) &&
            Objects.equals(name, other.name) &&
            Objects.equals(age, other.age) &&
            Objects.equals(address, other.address) &&
            Objects.equals(favoriteColor, other.favoriteColor) &&
            Objects.equals(friends, other.friends) &&
            Objects.equals(bestFriend, other.bestFriend) &&
            Objects.equals(petNames, other.petNames) &&
            Objects.equals(afraidOfAnimal, other.afraidOfAnimal) &&
            Objects.equals(vehicles, other.vehicles);
    }

    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            id,
            name,
            age,
            address,
            favoriteColor,
            friends,
            bestFriend,
            petNames,
            afraidOfAnimal,
            vehicles
        });
    }
}

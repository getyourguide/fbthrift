#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from libcpp.memory cimport shared_ptr
cimport thrift.py3.client

cimport hsmodule.clients

from my.namespacing.extend.test.extend.clients_wrapper cimport cExtendTestServiceClientWrapper

cdef class ExtendTestService(hsmodule.clients.HsTestService):
    cdef shared_ptr[cExtendTestServiceClientWrapper] _extend_ExtendTestService_client

    @staticmethod
    cdef _extend_ExtendTestService_set_client(ExtendTestService inst, shared_ptr[cExtendTestServiceClientWrapper] c_obj)

    cdef _extend_ExtendTestService_reset_client(ExtendTestService self)
    

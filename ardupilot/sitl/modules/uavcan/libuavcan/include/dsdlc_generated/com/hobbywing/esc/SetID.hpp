/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/user/cyberimmune-systems-autonomous-delivery-drone-with-kos-contest/modules/DroneCAN/DSDL/com/hobbywing/esc/210.SetID.uavcan
 */

#ifndef COM_HOBBYWING_ESC_SETID_HPP_INCLUDED
#define COM_HOBBYWING_ESC_SETID_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
OVERRIDE_SIGNATURE 0xc323cb5e9ec2b6f7

uint8 node_id
uint8 throttle_channel

---

uint8 node_id
uint8 throttle_channel
******************************************************************************/

/********************* DSDL signature source definition ***********************
com.hobbywing.esc.SetID
saturated uint8 node_id
saturated uint8 throttle_channel
---
saturated uint8 node_id
saturated uint8 throttle_channel
******************************************************************************/

#undef node_id
#undef throttle_channel
#undef node_id
#undef throttle_channel

namespace com
{
namespace hobbywing
{
namespace esc
{

struct UAVCAN_EXPORT SetID_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > node_id;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > throttle_channel;
        };

        enum
        {
            MinBitLen
                = FieldTypes::node_id::MinBitLen
                + FieldTypes::throttle_channel::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::node_id::MaxBitLen
                + FieldTypes::throttle_channel::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::node_id >::Type node_id;
        typename ::uavcan::StorageType< typename FieldTypes::throttle_channel >::Type throttle_channel;

        Request_()
            : node_id()
            , throttle_channel()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<16 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > node_id;
            typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > throttle_channel;
        };

        enum
        {
            MinBitLen
                = FieldTypes::node_id::MinBitLen
                + FieldTypes::throttle_channel::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::node_id::MaxBitLen
                + FieldTypes::throttle_channel::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::node_id >::Type node_id;
        typename ::uavcan::StorageType< typename FieldTypes::throttle_channel >::Type throttle_channel;

        Response_()
            : node_id()
            , throttle_channel()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<16 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 210 };

    static const char* getDataTypeFullName()
    {
        return "com.hobbywing.esc.SetID";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    SetID_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool SetID_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        node_id == rhs.node_id &&
        throttle_channel == rhs.throttle_channel;
}

template <int _tmpl>
bool SetID_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(node_id, rhs.node_id) &&
        ::uavcan::areClose(throttle_channel, rhs.throttle_channel);
}

template <int _tmpl>
int SetID_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::node_id::encode(self.node_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::throttle_channel::encode(self.throttle_channel, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int SetID_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::node_id::decode(self.node_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::throttle_channel::decode(self.throttle_channel, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool SetID_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        node_id == rhs.node_id &&
        throttle_channel == rhs.throttle_channel;
}

template <int _tmpl>
bool SetID_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(node_id, rhs.node_id) &&
        ::uavcan::areClose(throttle_channel, rhs.throttle_channel);
}

template <int _tmpl>
int SetID_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::node_id::encode(self.node_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::throttle_channel::encode(self.throttle_channel, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int SetID_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::node_id::decode(self.node_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::throttle_channel::decode(self.throttle_channel, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature SetID_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xC323CB5E9EC2B6F7ULL);

    Request::FieldTypes::node_id::extendDataTypeSignature(signature);
    Request::FieldTypes::throttle_channel::extendDataTypeSignature(signature);

    Response::FieldTypes::node_id::extendDataTypeSignature(signature);
    Response::FieldTypes::throttle_channel::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef SetID_ SetID;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::com::hobbywing::esc::SetID > _uavcan_gdtr_registrator_SetID;

}

} // Namespace esc
} // Namespace hobbywing
} // Namespace com

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::com::hobbywing::esc::SetID::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::com::hobbywing::esc::SetID::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::com::hobbywing::esc::SetID::Request >::stream(Stream& s, ::com::hobbywing::esc::SetID::Request::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "node_id: ";
    YamlStreamer< ::com::hobbywing::esc::SetID::Request::FieldTypes::node_id >::stream(s, obj.node_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "throttle_channel: ";
    YamlStreamer< ::com::hobbywing::esc::SetID::Request::FieldTypes::throttle_channel >::stream(s, obj.throttle_channel, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::com::hobbywing::esc::SetID::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::com::hobbywing::esc::SetID::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::com::hobbywing::esc::SetID::Response >::stream(Stream& s, ::com::hobbywing::esc::SetID::Response::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "node_id: ";
    YamlStreamer< ::com::hobbywing::esc::SetID::Response::FieldTypes::node_id >::stream(s, obj.node_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "throttle_channel: ";
    YamlStreamer< ::com::hobbywing::esc::SetID::Response::FieldTypes::throttle_channel >::stream(s, obj.throttle_channel, level + 1);
}

}

namespace com
{
namespace hobbywing
{
namespace esc
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::com::hobbywing::esc::SetID::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::com::hobbywing::esc::SetID::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::com::hobbywing::esc::SetID::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::com::hobbywing::esc::SetID::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace esc
} // Namespace hobbywing
} // Namespace com

#endif // COM_HOBBYWING_ESC_SETID_HPP_INCLUDED
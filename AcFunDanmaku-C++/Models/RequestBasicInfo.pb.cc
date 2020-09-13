// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RequestBasicInfo.proto

#include "RequestBasicInfo.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_AppInfo_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_AppInfo_AppInfo_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_DeviceInfo_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_DeviceInfo_DeviceInfo_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_EnvInfo_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EnvInfo_EnvInfo_2eproto;
namespace AcFunDanmu {
class RequestBasicInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RequestBasicInfo> _instance;
} _RequestBasicInfo_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_RequestBasicInfo_RequestBasicInfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_RequestBasicInfo_default_instance_;
    new (ptr) ::AcFunDanmu::RequestBasicInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::AcFunDanmu::RequestBasicInfo::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_RequestBasicInfo_RequestBasicInfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, 0, InitDefaultsscc_info_RequestBasicInfo_RequestBasicInfo_2eproto}, {
      &scc_info_AppInfo_AppInfo_2eproto.base,
      &scc_info_DeviceInfo_DeviceInfo_2eproto.base,
      &scc_info_EnvInfo_EnvInfo_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_RequestBasicInfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_RequestBasicInfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_RequestBasicInfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_RequestBasicInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::RequestBasicInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::RequestBasicInfo, clienttype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::RequestBasicInfo, deviceid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::RequestBasicInfo, clientip_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::RequestBasicInfo, appversion_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::RequestBasicInfo, channel_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::RequestBasicInfo, appinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::RequestBasicInfo, deviceinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::RequestBasicInfo, envinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::RequestBasicInfo, clientport_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::RequestBasicInfo, location_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::RequestBasicInfo, kpf_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::RequestBasicInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_RequestBasicInfo_default_instance_),
};

const char descriptor_table_protodef_RequestBasicInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026RequestBasicInfo.proto\022\nAcFunDanmu\032\020De"
  "viceInfo.proto\032\rAppInfo.proto\032\rEnvInfo.p"
  "roto\"\277\002\n\020RequestBasicInfo\0227\n\nclientType\030"
  "\001 \001(\0162#.AcFunDanmu.DeviceInfo.PlatformTy"
  "pe\022\020\n\010deviceId\030\002 \001(\t\022\020\n\010clientIp\030\003 \001(\t\022\022"
  "\n\nappVersion\030\004 \001(\t\022\017\n\007channel\030\005 \001(\t\022$\n\007a"
  "ppInfo\030\006 \001(\0132\023.AcFunDanmu.AppInfo\022*\n\ndev"
  "iceInfo\030\007 \001(\0132\026.AcFunDanmu.DeviceInfo\022$\n"
  "\007envInfo\030\010 \001(\0132\023.AcFunDanmu.EnvInfo\022\022\n\nc"
  "lientPort\030\t \001(\005\022\020\n\010location\030\n \001(\t\022\013\n\003kpf"
  "\030\013 \001(\tb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_RequestBasicInfo_2eproto_deps[3] = {
  &::descriptor_table_AppInfo_2eproto,
  &::descriptor_table_DeviceInfo_2eproto,
  &::descriptor_table_EnvInfo_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_RequestBasicInfo_2eproto_sccs[1] = {
  &scc_info_RequestBasicInfo_RequestBasicInfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_RequestBasicInfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_RequestBasicInfo_2eproto = {
  false, false, descriptor_table_protodef_RequestBasicInfo_2eproto, "RequestBasicInfo.proto", 414,
  &descriptor_table_RequestBasicInfo_2eproto_once, descriptor_table_RequestBasicInfo_2eproto_sccs, descriptor_table_RequestBasicInfo_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_RequestBasicInfo_2eproto::offsets,
  file_level_metadata_RequestBasicInfo_2eproto, 1, file_level_enum_descriptors_RequestBasicInfo_2eproto, file_level_service_descriptors_RequestBasicInfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_RequestBasicInfo_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_RequestBasicInfo_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

void RequestBasicInfo::InitAsDefaultInstance() {
  ::AcFunDanmu::_RequestBasicInfo_default_instance_._instance.get_mutable()->appinfo_ = const_cast< ::AcFunDanmu::AppInfo*>(
      ::AcFunDanmu::AppInfo::internal_default_instance());
  ::AcFunDanmu::_RequestBasicInfo_default_instance_._instance.get_mutable()->deviceinfo_ = const_cast< ::AcFunDanmu::DeviceInfo*>(
      ::AcFunDanmu::DeviceInfo::internal_default_instance());
  ::AcFunDanmu::_RequestBasicInfo_default_instance_._instance.get_mutable()->envinfo_ = const_cast< ::AcFunDanmu::EnvInfo*>(
      ::AcFunDanmu::EnvInfo::internal_default_instance());
}
class RequestBasicInfo::_Internal {
 public:
  static const ::AcFunDanmu::AppInfo& appinfo(const RequestBasicInfo* msg);
  static const ::AcFunDanmu::DeviceInfo& deviceinfo(const RequestBasicInfo* msg);
  static const ::AcFunDanmu::EnvInfo& envinfo(const RequestBasicInfo* msg);
};

const ::AcFunDanmu::AppInfo&
RequestBasicInfo::_Internal::appinfo(const RequestBasicInfo* msg) {
  return *msg->appinfo_;
}
const ::AcFunDanmu::DeviceInfo&
RequestBasicInfo::_Internal::deviceinfo(const RequestBasicInfo* msg) {
  return *msg->deviceinfo_;
}
const ::AcFunDanmu::EnvInfo&
RequestBasicInfo::_Internal::envinfo(const RequestBasicInfo* msg) {
  return *msg->envinfo_;
}
void RequestBasicInfo::clear_appinfo() {
  if (GetArena() == nullptr && appinfo_ != nullptr) {
    delete appinfo_;
  }
  appinfo_ = nullptr;
}
void RequestBasicInfo::clear_deviceinfo() {
  if (GetArena() == nullptr && deviceinfo_ != nullptr) {
    delete deviceinfo_;
  }
  deviceinfo_ = nullptr;
}
void RequestBasicInfo::clear_envinfo() {
  if (GetArena() == nullptr && envinfo_ != nullptr) {
    delete envinfo_;
  }
  envinfo_ = nullptr;
}
RequestBasicInfo::RequestBasicInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.RequestBasicInfo)
}
RequestBasicInfo::RequestBasicInfo(const RequestBasicInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  deviceid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_deviceid().empty()) {
    deviceid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_deviceid(),
      GetArena());
  }
  clientip_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_clientip().empty()) {
    clientip_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_clientip(),
      GetArena());
  }
  appversion_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_appversion().empty()) {
    appversion_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_appversion(),
      GetArena());
  }
  channel_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_channel().empty()) {
    channel_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_channel(),
      GetArena());
  }
  location_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_location().empty()) {
    location_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_location(),
      GetArena());
  }
  kpf_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_kpf().empty()) {
    kpf_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_kpf(),
      GetArena());
  }
  if (from._internal_has_appinfo()) {
    appinfo_ = new ::AcFunDanmu::AppInfo(*from.appinfo_);
  } else {
    appinfo_ = nullptr;
  }
  if (from._internal_has_deviceinfo()) {
    deviceinfo_ = new ::AcFunDanmu::DeviceInfo(*from.deviceinfo_);
  } else {
    deviceinfo_ = nullptr;
  }
  if (from._internal_has_envinfo()) {
    envinfo_ = new ::AcFunDanmu::EnvInfo(*from.envinfo_);
  } else {
    envinfo_ = nullptr;
  }
  ::memcpy(&clienttype_, &from.clienttype_,
    static_cast<size_t>(reinterpret_cast<char*>(&clientport_) -
    reinterpret_cast<char*>(&clienttype_)) + sizeof(clientport_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.RequestBasicInfo)
}

void RequestBasicInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_RequestBasicInfo_RequestBasicInfo_2eproto.base);
  deviceid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  clientip_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  appversion_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  channel_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  location_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  kpf_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&appinfo_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&clientport_) -
      reinterpret_cast<char*>(&appinfo_)) + sizeof(clientport_));
}

RequestBasicInfo::~RequestBasicInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.RequestBasicInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RequestBasicInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  deviceid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  clientip_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  appversion_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  channel_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  location_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  kpf_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete appinfo_;
  if (this != internal_default_instance()) delete deviceinfo_;
  if (this != internal_default_instance()) delete envinfo_;
}

void RequestBasicInfo::ArenaDtor(void* object) {
  RequestBasicInfo* _this = reinterpret_cast< RequestBasicInfo* >(object);
  (void)_this;
}
void RequestBasicInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RequestBasicInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RequestBasicInfo& RequestBasicInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RequestBasicInfo_RequestBasicInfo_2eproto.base);
  return *internal_default_instance();
}


void RequestBasicInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.RequestBasicInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  deviceid_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  clientip_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  appversion_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  channel_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  location_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  kpf_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && appinfo_ != nullptr) {
    delete appinfo_;
  }
  appinfo_ = nullptr;
  if (GetArena() == nullptr && deviceinfo_ != nullptr) {
    delete deviceinfo_;
  }
  deviceinfo_ = nullptr;
  if (GetArena() == nullptr && envinfo_ != nullptr) {
    delete envinfo_;
  }
  envinfo_ = nullptr;
  ::memset(&clienttype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&clientport_) -
      reinterpret_cast<char*>(&clienttype_)) + sizeof(clientport_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RequestBasicInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .AcFunDanmu.DeviceInfo.PlatformType clientType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_clienttype(static_cast<::AcFunDanmu::DeviceInfo_PlatformType>(val));
        } else goto handle_unusual;
        continue;
      // string deviceId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_deviceid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.RequestBasicInfo.deviceId"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string clientIp = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_clientip();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.RequestBasicInfo.clientIp"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string appVersion = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_appversion();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.RequestBasicInfo.appVersion"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string channel = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_channel();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.RequestBasicInfo.channel"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .AcFunDanmu.AppInfo appInfo = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_appinfo(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .AcFunDanmu.DeviceInfo deviceInfo = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_deviceinfo(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .AcFunDanmu.EnvInfo envInfo = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_envinfo(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 clientPort = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72)) {
          clientport_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string location = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          auto str = _internal_mutable_location();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.RequestBasicInfo.location"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string kpf = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          auto str = _internal_mutable_kpf();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.RequestBasicInfo.kpf"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RequestBasicInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.RequestBasicInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.DeviceInfo.PlatformType clientType = 1;
  if (this->clienttype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_clienttype(), target);
  }

  // string deviceId = 2;
  if (this->deviceid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_deviceid().data(), static_cast<int>(this->_internal_deviceid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.RequestBasicInfo.deviceId");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_deviceid(), target);
  }

  // string clientIp = 3;
  if (this->clientip().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_clientip().data(), static_cast<int>(this->_internal_clientip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.RequestBasicInfo.clientIp");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_clientip(), target);
  }

  // string appVersion = 4;
  if (this->appversion().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_appversion().data(), static_cast<int>(this->_internal_appversion().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.RequestBasicInfo.appVersion");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_appversion(), target);
  }

  // string channel = 5;
  if (this->channel().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_channel().data(), static_cast<int>(this->_internal_channel().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.RequestBasicInfo.channel");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_channel(), target);
  }

  // .AcFunDanmu.AppInfo appInfo = 6;
  if (this->has_appinfo()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::appinfo(this), target, stream);
  }

  // .AcFunDanmu.DeviceInfo deviceInfo = 7;
  if (this->has_deviceinfo()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        7, _Internal::deviceinfo(this), target, stream);
  }

  // .AcFunDanmu.EnvInfo envInfo = 8;
  if (this->has_envinfo()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        8, _Internal::envinfo(this), target, stream);
  }

  // int32 clientPort = 9;
  if (this->clientport() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(9, this->_internal_clientport(), target);
  }

  // string location = 10;
  if (this->location().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_location().data(), static_cast<int>(this->_internal_location().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.RequestBasicInfo.location");
    target = stream->WriteStringMaybeAliased(
        10, this->_internal_location(), target);
  }

  // string kpf = 11;
  if (this->kpf().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_kpf().data(), static_cast<int>(this->_internal_kpf().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.RequestBasicInfo.kpf");
    target = stream->WriteStringMaybeAliased(
        11, this->_internal_kpf(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.RequestBasicInfo)
  return target;
}

size_t RequestBasicInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.RequestBasicInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string deviceId = 2;
  if (this->deviceid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_deviceid());
  }

  // string clientIp = 3;
  if (this->clientip().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_clientip());
  }

  // string appVersion = 4;
  if (this->appversion().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_appversion());
  }

  // string channel = 5;
  if (this->channel().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_channel());
  }

  // string location = 10;
  if (this->location().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_location());
  }

  // string kpf = 11;
  if (this->kpf().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_kpf());
  }

  // .AcFunDanmu.AppInfo appInfo = 6;
  if (this->has_appinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *appinfo_);
  }

  // .AcFunDanmu.DeviceInfo deviceInfo = 7;
  if (this->has_deviceinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *deviceinfo_);
  }

  // .AcFunDanmu.EnvInfo envInfo = 8;
  if (this->has_envinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *envinfo_);
  }

  // .AcFunDanmu.DeviceInfo.PlatformType clientType = 1;
  if (this->clienttype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_clienttype());
  }

  // int32 clientPort = 9;
  if (this->clientport() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_clientport());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RequestBasicInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.RequestBasicInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const RequestBasicInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RequestBasicInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.RequestBasicInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.RequestBasicInfo)
    MergeFrom(*source);
  }
}

void RequestBasicInfo::MergeFrom(const RequestBasicInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.RequestBasicInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.deviceid().size() > 0) {
    _internal_set_deviceid(from._internal_deviceid());
  }
  if (from.clientip().size() > 0) {
    _internal_set_clientip(from._internal_clientip());
  }
  if (from.appversion().size() > 0) {
    _internal_set_appversion(from._internal_appversion());
  }
  if (from.channel().size() > 0) {
    _internal_set_channel(from._internal_channel());
  }
  if (from.location().size() > 0) {
    _internal_set_location(from._internal_location());
  }
  if (from.kpf().size() > 0) {
    _internal_set_kpf(from._internal_kpf());
  }
  if (from.has_appinfo()) {
    _internal_mutable_appinfo()->::AcFunDanmu::AppInfo::MergeFrom(from._internal_appinfo());
  }
  if (from.has_deviceinfo()) {
    _internal_mutable_deviceinfo()->::AcFunDanmu::DeviceInfo::MergeFrom(from._internal_deviceinfo());
  }
  if (from.has_envinfo()) {
    _internal_mutable_envinfo()->::AcFunDanmu::EnvInfo::MergeFrom(from._internal_envinfo());
  }
  if (from.clienttype() != 0) {
    _internal_set_clienttype(from._internal_clienttype());
  }
  if (from.clientport() != 0) {
    _internal_set_clientport(from._internal_clientport());
  }
}

void RequestBasicInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.RequestBasicInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RequestBasicInfo::CopyFrom(const RequestBasicInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.RequestBasicInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestBasicInfo::IsInitialized() const {
  return true;
}

void RequestBasicInfo::InternalSwap(RequestBasicInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  deviceid_.Swap(&other->deviceid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  clientip_.Swap(&other->clientip_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  appversion_.Swap(&other->appversion_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  channel_.Swap(&other->channel_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  location_.Swap(&other->location_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  kpf_.Swap(&other->kpf_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RequestBasicInfo, clientport_)
      + sizeof(RequestBasicInfo::clientport_)
      - PROTOBUF_FIELD_OFFSET(RequestBasicInfo, appinfo_)>(
          reinterpret_cast<char*>(&appinfo_),
          reinterpret_cast<char*>(&other->appinfo_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RequestBasicInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::RequestBasicInfo* Arena::CreateMaybeMessage< ::AcFunDanmu::RequestBasicInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::RequestBasicInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AppInfo.proto

#include "AppInfo.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_AppInfo_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_AppInfo_ExtensionInfoEntry_DoNotUse_AppInfo_2eproto;
namespace AcFunDanmu {
class AppInfo_ExtensionInfoEntry_DoNotUseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AppInfo_ExtensionInfoEntry_DoNotUse> _instance;
} _AppInfo_ExtensionInfoEntry_DoNotUse_default_instance_;
class AppInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AppInfo> _instance;
} _AppInfo_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_AppInfo_AppInfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_AppInfo_default_instance_;
    new (ptr) ::AcFunDanmu::AppInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::AcFunDanmu::AppInfo::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_AppInfo_AppInfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_AppInfo_AppInfo_2eproto}, {
      &scc_info_AppInfo_ExtensionInfoEntry_DoNotUse_AppInfo_2eproto.base,}};

static void InitDefaultsscc_info_AppInfo_ExtensionInfoEntry_DoNotUse_AppInfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_AppInfo_ExtensionInfoEntry_DoNotUse_default_instance_;
    new (ptr) ::AcFunDanmu::AppInfo_ExtensionInfoEntry_DoNotUse();
  }
  ::AcFunDanmu::AppInfo_ExtensionInfoEntry_DoNotUse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_AppInfo_ExtensionInfoEntry_DoNotUse_AppInfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_AppInfo_ExtensionInfoEntry_DoNotUse_AppInfo_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AppInfo_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_AppInfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AppInfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_AppInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AppInfo_ExtensionInfoEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AppInfo_ExtensionInfoEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AppInfo_ExtensionInfoEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AppInfo_ExtensionInfoEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AppInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AppInfo, appname_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AppInfo, appversion_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AppInfo, appchannel_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AppInfo, sdkversion_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::AppInfo, extensioninfo_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::AcFunDanmu::AppInfo_ExtensionInfoEntry_DoNotUse)},
  { 9, -1, sizeof(::AcFunDanmu::AppInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_AppInfo_ExtensionInfoEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_AppInfo_default_instance_),
};

const char descriptor_table_protodef_AppInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rAppInfo.proto\022\nAcFunDanmu\"\313\001\n\007AppInfo\022"
  "\017\n\007appName\030\001 \001(\t\022\022\n\nappVersion\030\002 \001(\t\022\022\n\n"
  "appChannel\030\003 \001(\t\022\022\n\nsdkVersion\030\004 \001(\t\022=\n\r"
  "extensionInfo\030\013 \003(\0132&.AcFunDanmu.AppInfo"
  ".ExtensionInfoEntry\0324\n\022ExtensionInfoEntr"
  "y\022\013\n\003key\030\001 \001(\t\022\r\n\005value\030\002 \001(\t:\0028\001b\006proto"
  "3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_AppInfo_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_AppInfo_2eproto_sccs[2] = {
  &scc_info_AppInfo_AppInfo_2eproto.base,
  &scc_info_AppInfo_ExtensionInfoEntry_DoNotUse_AppInfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AppInfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AppInfo_2eproto = {
  false, false, descriptor_table_protodef_AppInfo_2eproto, "AppInfo.proto", 241,
  &descriptor_table_AppInfo_2eproto_once, descriptor_table_AppInfo_2eproto_sccs, descriptor_table_AppInfo_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_AppInfo_2eproto::offsets,
  file_level_metadata_AppInfo_2eproto, 2, file_level_enum_descriptors_AppInfo_2eproto, file_level_service_descriptors_AppInfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_AppInfo_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_AppInfo_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

AppInfo_ExtensionInfoEntry_DoNotUse::AppInfo_ExtensionInfoEntry_DoNotUse() {}
AppInfo_ExtensionInfoEntry_DoNotUse::AppInfo_ExtensionInfoEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void AppInfo_ExtensionInfoEntry_DoNotUse::MergeFrom(const AppInfo_ExtensionInfoEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata AppInfo_ExtensionInfoEntry_DoNotUse::GetMetadata() const {
  return GetMetadataStatic();
}
void AppInfo_ExtensionInfoEntry_DoNotUse::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& other) {
  ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom(other);
}


// ===================================================================

void AppInfo::InitAsDefaultInstance() {
}
class AppInfo::_Internal {
 public:
};

AppInfo::AppInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  extensioninfo_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.AppInfo)
}
AppInfo::AppInfo(const AppInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  extensioninfo_.MergeFrom(from.extensioninfo_);
  appname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_appname().empty()) {
    appname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_appname(),
      GetArena());
  }
  appversion_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_appversion().empty()) {
    appversion_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_appversion(),
      GetArena());
  }
  appchannel_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_appchannel().empty()) {
    appchannel_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_appchannel(),
      GetArena());
  }
  sdkversion_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sdkversion().empty()) {
    sdkversion_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_sdkversion(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.AppInfo)
}

void AppInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_AppInfo_AppInfo_2eproto.base);
  appname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  appversion_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  appchannel_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sdkversion_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

AppInfo::~AppInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.AppInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AppInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  appname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  appversion_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  appchannel_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sdkversion_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void AppInfo::ArenaDtor(void* object) {
  AppInfo* _this = reinterpret_cast< AppInfo* >(object);
  (void)_this;
}
void AppInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AppInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AppInfo& AppInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AppInfo_AppInfo_2eproto.base);
  return *internal_default_instance();
}


void AppInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.AppInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  extensioninfo_.Clear();
  appname_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  appversion_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  appchannel_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sdkversion_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AppInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string appName = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_appname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.AppInfo.appName"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string appVersion = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_appversion();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.AppInfo.appVersion"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string appChannel = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_appchannel();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.AppInfo.appChannel"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string sdkVersion = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_sdkversion();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.AppInfo.sdkVersion"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // map<string, string> extensionInfo = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&extensioninfo_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<90>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* AppInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.AppInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string appName = 1;
  if (this->appname().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_appname().data(), static_cast<int>(this->_internal_appname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.AppInfo.appName");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_appname(), target);
  }

  // string appVersion = 2;
  if (this->appversion().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_appversion().data(), static_cast<int>(this->_internal_appversion().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.AppInfo.appVersion");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_appversion(), target);
  }

  // string appChannel = 3;
  if (this->appchannel().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_appchannel().data(), static_cast<int>(this->_internal_appchannel().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.AppInfo.appChannel");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_appchannel(), target);
  }

  // string sdkVersion = 4;
  if (this->sdkversion().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sdkversion().data(), static_cast<int>(this->_internal_sdkversion().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.AppInfo.sdkVersion");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_sdkversion(), target);
  }

  // map<string, string> extensionInfo = 11;
  if (!this->_internal_extensioninfo().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "AcFunDanmu.AppInfo.ExtensionInfoEntry.key");
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "AcFunDanmu.AppInfo.ExtensionInfoEntry.value");
      }
    };

    if (stream->IsSerializationDeterministic() &&
        this->_internal_extensioninfo().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_extensioninfo().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_extensioninfo().begin();
          it != this->_internal_extensioninfo().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = AppInfo_ExtensionInfoEntry_DoNotUse::Funcs::InternalSerialize(11, items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second, target, stream);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_extensioninfo().begin();
          it != this->_internal_extensioninfo().end(); ++it) {
        target = AppInfo_ExtensionInfoEntry_DoNotUse::Funcs::InternalSerialize(11, it->first, it->second, target, stream);
        Utf8Check::Check(&(*it));
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.AppInfo)
  return target;
}

size_t AppInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.AppInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, string> extensionInfo = 11;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_extensioninfo_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
      it = this->_internal_extensioninfo().begin();
      it != this->_internal_extensioninfo().end(); ++it) {
    total_size += AppInfo_ExtensionInfoEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // string appName = 1;
  if (this->appname().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_appname());
  }

  // string appVersion = 2;
  if (this->appversion().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_appversion());
  }

  // string appChannel = 3;
  if (this->appchannel().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_appchannel());
  }

  // string sdkVersion = 4;
  if (this->sdkversion().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sdkversion());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AppInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.AppInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const AppInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AppInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.AppInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.AppInfo)
    MergeFrom(*source);
  }
}

void AppInfo::MergeFrom(const AppInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.AppInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  extensioninfo_.MergeFrom(from.extensioninfo_);
  if (from.appname().size() > 0) {
    _internal_set_appname(from._internal_appname());
  }
  if (from.appversion().size() > 0) {
    _internal_set_appversion(from._internal_appversion());
  }
  if (from.appchannel().size() > 0) {
    _internal_set_appchannel(from._internal_appchannel());
  }
  if (from.sdkversion().size() > 0) {
    _internal_set_sdkversion(from._internal_sdkversion());
  }
}

void AppInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.AppInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AppInfo::CopyFrom(const AppInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.AppInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppInfo::IsInitialized() const {
  return true;
}

void AppInfo::InternalSwap(AppInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  extensioninfo_.Swap(&other->extensioninfo_);
  appname_.Swap(&other->appname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  appversion_.Swap(&other->appversion_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  appchannel_.Swap(&other->appchannel_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sdkversion_.Swap(&other->sdkversion_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata AppInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::AppInfo_ExtensionInfoEntry_DoNotUse* Arena::CreateMaybeMessage< ::AcFunDanmu::AppInfo_ExtensionInfoEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::AppInfo_ExtensionInfoEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::AcFunDanmu::AppInfo* Arena::CreateMaybeMessage< ::AcFunDanmu::AppInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::AppInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

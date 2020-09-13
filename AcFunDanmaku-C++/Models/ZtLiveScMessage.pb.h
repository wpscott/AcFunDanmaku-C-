// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveScMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ZtLiveScMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ZtLiveScMessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ZtLiveScMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ZtLiveScMessage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtLiveScMessage_2eproto;
namespace AcFunDanmu {
class ZtLiveScMessage;
class ZtLiveScMessageDefaultTypeInternal;
extern ZtLiveScMessageDefaultTypeInternal _ZtLiveScMessage_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::ZtLiveScMessage* Arena::CreateMaybeMessage<::AcFunDanmu::ZtLiveScMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum ZtLiveScMessage_CompressionType : int {
  ZtLiveScMessage_CompressionType_UNKNOWN = 0,
  ZtLiveScMessage_CompressionType_NONE = 1,
  ZtLiveScMessage_CompressionType_GZIP = 2,
  ZtLiveScMessage_CompressionType_ZtLiveScMessage_CompressionType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ZtLiveScMessage_CompressionType_ZtLiveScMessage_CompressionType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ZtLiveScMessage_CompressionType_IsValid(int value);
constexpr ZtLiveScMessage_CompressionType ZtLiveScMessage_CompressionType_CompressionType_MIN = ZtLiveScMessage_CompressionType_UNKNOWN;
constexpr ZtLiveScMessage_CompressionType ZtLiveScMessage_CompressionType_CompressionType_MAX = ZtLiveScMessage_CompressionType_GZIP;
constexpr int ZtLiveScMessage_CompressionType_CompressionType_ARRAYSIZE = ZtLiveScMessage_CompressionType_CompressionType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ZtLiveScMessage_CompressionType_descriptor();
template<typename T>
inline const std::string& ZtLiveScMessage_CompressionType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ZtLiveScMessage_CompressionType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ZtLiveScMessage_CompressionType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ZtLiveScMessage_CompressionType_descriptor(), enum_t_value);
}
inline bool ZtLiveScMessage_CompressionType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ZtLiveScMessage_CompressionType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ZtLiveScMessage_CompressionType>(
    ZtLiveScMessage_CompressionType_descriptor(), name, value);
}
// ===================================================================

class ZtLiveScMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtLiveScMessage) */ {
 public:
  inline ZtLiveScMessage() : ZtLiveScMessage(nullptr) {}
  virtual ~ZtLiveScMessage();

  ZtLiveScMessage(const ZtLiveScMessage& from);
  ZtLiveScMessage(ZtLiveScMessage&& from) noexcept
    : ZtLiveScMessage() {
    *this = ::std::move(from);
  }

  inline ZtLiveScMessage& operator=(const ZtLiveScMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtLiveScMessage& operator=(ZtLiveScMessage&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ZtLiveScMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ZtLiveScMessage* internal_default_instance() {
    return reinterpret_cast<const ZtLiveScMessage*>(
               &_ZtLiveScMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ZtLiveScMessage& a, ZtLiveScMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtLiveScMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ZtLiveScMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ZtLiveScMessage* New() const final {
    return CreateMaybeMessage<ZtLiveScMessage>(nullptr);
  }

  ZtLiveScMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ZtLiveScMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ZtLiveScMessage& from);
  void MergeFrom(const ZtLiveScMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ZtLiveScMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtLiveScMessage";
  }
  protected:
  explicit ZtLiveScMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ZtLiveScMessage_2eproto);
    return ::descriptor_table_ZtLiveScMessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef ZtLiveScMessage_CompressionType CompressionType;
  static constexpr CompressionType UNKNOWN =
    ZtLiveScMessage_CompressionType_UNKNOWN;
  static constexpr CompressionType NONE =
    ZtLiveScMessage_CompressionType_NONE;
  static constexpr CompressionType GZIP =
    ZtLiveScMessage_CompressionType_GZIP;
  static inline bool CompressionType_IsValid(int value) {
    return ZtLiveScMessage_CompressionType_IsValid(value);
  }
  static constexpr CompressionType CompressionType_MIN =
    ZtLiveScMessage_CompressionType_CompressionType_MIN;
  static constexpr CompressionType CompressionType_MAX =
    ZtLiveScMessage_CompressionType_CompressionType_MAX;
  static constexpr int CompressionType_ARRAYSIZE =
    ZtLiveScMessage_CompressionType_CompressionType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CompressionType_descriptor() {
    return ZtLiveScMessage_CompressionType_descriptor();
  }
  template<typename T>
  static inline const std::string& CompressionType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CompressionType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CompressionType_Name.");
    return ZtLiveScMessage_CompressionType_Name(enum_t_value);
  }
  static inline bool CompressionType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      CompressionType* value) {
    return ZtLiveScMessage_CompressionType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kMessageTypeFieldNumber = 1,
    kPayloadFieldNumber = 3,
    kLiveIdFieldNumber = 4,
    kTicketFieldNumber = 5,
    kServerTimestampMsFieldNumber = 6,
    kCompressionTypeFieldNumber = 2,
  };
  // string messageType = 1;
  void clear_messagetype();
  const std::string& messagetype() const;
  void set_messagetype(const std::string& value);
  void set_messagetype(std::string&& value);
  void set_messagetype(const char* value);
  void set_messagetype(const char* value, size_t size);
  std::string* mutable_messagetype();
  std::string* release_messagetype();
  void set_allocated_messagetype(std::string* messagetype);
  private:
  const std::string& _internal_messagetype() const;
  void _internal_set_messagetype(const std::string& value);
  std::string* _internal_mutable_messagetype();
  public:

  // bytes payload = 3;
  void clear_payload();
  const std::string& payload() const;
  void set_payload(const std::string& value);
  void set_payload(std::string&& value);
  void set_payload(const char* value);
  void set_payload(const void* value, size_t size);
  std::string* mutable_payload();
  std::string* release_payload();
  void set_allocated_payload(std::string* payload);
  private:
  const std::string& _internal_payload() const;
  void _internal_set_payload(const std::string& value);
  std::string* _internal_mutable_payload();
  public:

  // string liveId = 4;
  void clear_liveid();
  const std::string& liveid() const;
  void set_liveid(const std::string& value);
  void set_liveid(std::string&& value);
  void set_liveid(const char* value);
  void set_liveid(const char* value, size_t size);
  std::string* mutable_liveid();
  std::string* release_liveid();
  void set_allocated_liveid(std::string* liveid);
  private:
  const std::string& _internal_liveid() const;
  void _internal_set_liveid(const std::string& value);
  std::string* _internal_mutable_liveid();
  public:

  // string ticket = 5;
  void clear_ticket();
  const std::string& ticket() const;
  void set_ticket(const std::string& value);
  void set_ticket(std::string&& value);
  void set_ticket(const char* value);
  void set_ticket(const char* value, size_t size);
  std::string* mutable_ticket();
  std::string* release_ticket();
  void set_allocated_ticket(std::string* ticket);
  private:
  const std::string& _internal_ticket() const;
  void _internal_set_ticket(const std::string& value);
  std::string* _internal_mutable_ticket();
  public:

  // int64 serverTimestampMs = 6;
  void clear_servertimestampms();
  ::PROTOBUF_NAMESPACE_ID::int64 servertimestampms() const;
  void set_servertimestampms(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_servertimestampms() const;
  void _internal_set_servertimestampms(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // .AcFunDanmu.ZtLiveScMessage.CompressionType compressionType = 2;
  void clear_compressiontype();
  ::AcFunDanmu::ZtLiveScMessage_CompressionType compressiontype() const;
  void set_compressiontype(::AcFunDanmu::ZtLiveScMessage_CompressionType value);
  private:
  ::AcFunDanmu::ZtLiveScMessage_CompressionType _internal_compressiontype() const;
  void _internal_set_compressiontype(::AcFunDanmu::ZtLiveScMessage_CompressionType value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtLiveScMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr messagetype_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr payload_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr liveid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ticket_;
  ::PROTOBUF_NAMESPACE_ID::int64 servertimestampms_;
  int compressiontype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ZtLiveScMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ZtLiveScMessage

// string messageType = 1;
inline void ZtLiveScMessage::clear_messagetype() {
  messagetype_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ZtLiveScMessage::messagetype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveScMessage.messageType)
  return _internal_messagetype();
}
inline void ZtLiveScMessage::set_messagetype(const std::string& value) {
  _internal_set_messagetype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveScMessage.messageType)
}
inline std::string* ZtLiveScMessage::mutable_messagetype() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveScMessage.messageType)
  return _internal_mutable_messagetype();
}
inline const std::string& ZtLiveScMessage::_internal_messagetype() const {
  return messagetype_.Get();
}
inline void ZtLiveScMessage::_internal_set_messagetype(const std::string& value) {
  
  messagetype_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ZtLiveScMessage::set_messagetype(std::string&& value) {
  
  messagetype_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.ZtLiveScMessage.messageType)
}
inline void ZtLiveScMessage::set_messagetype(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  messagetype_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.ZtLiveScMessage.messageType)
}
inline void ZtLiveScMessage::set_messagetype(const char* value,
    size_t size) {
  
  messagetype_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.ZtLiveScMessage.messageType)
}
inline std::string* ZtLiveScMessage::_internal_mutable_messagetype() {
  
  return messagetype_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ZtLiveScMessage::release_messagetype() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.ZtLiveScMessage.messageType)
  return messagetype_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ZtLiveScMessage::set_allocated_messagetype(std::string* messagetype) {
  if (messagetype != nullptr) {
    
  } else {
    
  }
  messagetype_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), messagetype,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.ZtLiveScMessage.messageType)
}

// .AcFunDanmu.ZtLiveScMessage.CompressionType compressionType = 2;
inline void ZtLiveScMessage::clear_compressiontype() {
  compressiontype_ = 0;
}
inline ::AcFunDanmu::ZtLiveScMessage_CompressionType ZtLiveScMessage::_internal_compressiontype() const {
  return static_cast< ::AcFunDanmu::ZtLiveScMessage_CompressionType >(compressiontype_);
}
inline ::AcFunDanmu::ZtLiveScMessage_CompressionType ZtLiveScMessage::compressiontype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveScMessage.compressionType)
  return _internal_compressiontype();
}
inline void ZtLiveScMessage::_internal_set_compressiontype(::AcFunDanmu::ZtLiveScMessage_CompressionType value) {
  
  compressiontype_ = value;
}
inline void ZtLiveScMessage::set_compressiontype(::AcFunDanmu::ZtLiveScMessage_CompressionType value) {
  _internal_set_compressiontype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveScMessage.compressionType)
}

// bytes payload = 3;
inline void ZtLiveScMessage::clear_payload() {
  payload_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ZtLiveScMessage::payload() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveScMessage.payload)
  return _internal_payload();
}
inline void ZtLiveScMessage::set_payload(const std::string& value) {
  _internal_set_payload(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveScMessage.payload)
}
inline std::string* ZtLiveScMessage::mutable_payload() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveScMessage.payload)
  return _internal_mutable_payload();
}
inline const std::string& ZtLiveScMessage::_internal_payload() const {
  return payload_.Get();
}
inline void ZtLiveScMessage::_internal_set_payload(const std::string& value) {
  
  payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ZtLiveScMessage::set_payload(std::string&& value) {
  
  payload_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.ZtLiveScMessage.payload)
}
inline void ZtLiveScMessage::set_payload(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.ZtLiveScMessage.payload)
}
inline void ZtLiveScMessage::set_payload(const void* value,
    size_t size) {
  
  payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.ZtLiveScMessage.payload)
}
inline std::string* ZtLiveScMessage::_internal_mutable_payload() {
  
  return payload_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ZtLiveScMessage::release_payload() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.ZtLiveScMessage.payload)
  return payload_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ZtLiveScMessage::set_allocated_payload(std::string* payload) {
  if (payload != nullptr) {
    
  } else {
    
  }
  payload_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), payload,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.ZtLiveScMessage.payload)
}

// string liveId = 4;
inline void ZtLiveScMessage::clear_liveid() {
  liveid_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ZtLiveScMessage::liveid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveScMessage.liveId)
  return _internal_liveid();
}
inline void ZtLiveScMessage::set_liveid(const std::string& value) {
  _internal_set_liveid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveScMessage.liveId)
}
inline std::string* ZtLiveScMessage::mutable_liveid() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveScMessage.liveId)
  return _internal_mutable_liveid();
}
inline const std::string& ZtLiveScMessage::_internal_liveid() const {
  return liveid_.Get();
}
inline void ZtLiveScMessage::_internal_set_liveid(const std::string& value) {
  
  liveid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ZtLiveScMessage::set_liveid(std::string&& value) {
  
  liveid_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.ZtLiveScMessage.liveId)
}
inline void ZtLiveScMessage::set_liveid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  liveid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.ZtLiveScMessage.liveId)
}
inline void ZtLiveScMessage::set_liveid(const char* value,
    size_t size) {
  
  liveid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.ZtLiveScMessage.liveId)
}
inline std::string* ZtLiveScMessage::_internal_mutable_liveid() {
  
  return liveid_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ZtLiveScMessage::release_liveid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.ZtLiveScMessage.liveId)
  return liveid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ZtLiveScMessage::set_allocated_liveid(std::string* liveid) {
  if (liveid != nullptr) {
    
  } else {
    
  }
  liveid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), liveid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.ZtLiveScMessage.liveId)
}

// string ticket = 5;
inline void ZtLiveScMessage::clear_ticket() {
  ticket_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ZtLiveScMessage::ticket() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveScMessage.ticket)
  return _internal_ticket();
}
inline void ZtLiveScMessage::set_ticket(const std::string& value) {
  _internal_set_ticket(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveScMessage.ticket)
}
inline std::string* ZtLiveScMessage::mutable_ticket() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveScMessage.ticket)
  return _internal_mutable_ticket();
}
inline const std::string& ZtLiveScMessage::_internal_ticket() const {
  return ticket_.Get();
}
inline void ZtLiveScMessage::_internal_set_ticket(const std::string& value) {
  
  ticket_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ZtLiveScMessage::set_ticket(std::string&& value) {
  
  ticket_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.ZtLiveScMessage.ticket)
}
inline void ZtLiveScMessage::set_ticket(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  ticket_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.ZtLiveScMessage.ticket)
}
inline void ZtLiveScMessage::set_ticket(const char* value,
    size_t size) {
  
  ticket_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.ZtLiveScMessage.ticket)
}
inline std::string* ZtLiveScMessage::_internal_mutable_ticket() {
  
  return ticket_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ZtLiveScMessage::release_ticket() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.ZtLiveScMessage.ticket)
  return ticket_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ZtLiveScMessage::set_allocated_ticket(std::string* ticket) {
  if (ticket != nullptr) {
    
  } else {
    
  }
  ticket_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ticket,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.ZtLiveScMessage.ticket)
}

// int64 serverTimestampMs = 6;
inline void ZtLiveScMessage::clear_servertimestampms() {
  servertimestampms_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtLiveScMessage::_internal_servertimestampms() const {
  return servertimestampms_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtLiveScMessage::servertimestampms() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveScMessage.serverTimestampMs)
  return _internal_servertimestampms();
}
inline void ZtLiveScMessage::_internal_set_servertimestampms(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  servertimestampms_ = value;
}
inline void ZtLiveScMessage::set_servertimestampms(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_servertimestampms(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveScMessage.serverTimestampMs)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::ZtLiveScMessage_CompressionType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::ZtLiveScMessage_CompressionType>() {
  return ::AcFunDanmu::ZtLiveScMessage_CompressionType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ZtLiveScMessage_2eproto

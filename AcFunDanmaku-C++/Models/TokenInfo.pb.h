// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TokenInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_TokenInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_TokenInfo_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_TokenInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_TokenInfo_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_TokenInfo_2eproto;
namespace AcFunDanmu {
class TokenInfo;
class TokenInfoDefaultTypeInternal;
extern TokenInfoDefaultTypeInternal _TokenInfo_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::TokenInfo* Arena::CreateMaybeMessage<::AcFunDanmu::TokenInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum TokenInfo_TokenType : int {
  TokenInfo_TokenType_kInvalid = 0,
  TokenInfo_TokenType_kServiceToken = 1,
  TokenInfo_TokenType_TokenInfo_TokenType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  TokenInfo_TokenType_TokenInfo_TokenType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool TokenInfo_TokenType_IsValid(int value);
constexpr TokenInfo_TokenType TokenInfo_TokenType_TokenType_MIN = TokenInfo_TokenType_kInvalid;
constexpr TokenInfo_TokenType TokenInfo_TokenType_TokenType_MAX = TokenInfo_TokenType_kServiceToken;
constexpr int TokenInfo_TokenType_TokenType_ARRAYSIZE = TokenInfo_TokenType_TokenType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TokenInfo_TokenType_descriptor();
template<typename T>
inline const std::string& TokenInfo_TokenType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TokenInfo_TokenType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TokenInfo_TokenType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    TokenInfo_TokenType_descriptor(), enum_t_value);
}
inline bool TokenInfo_TokenType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, TokenInfo_TokenType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TokenInfo_TokenType>(
    TokenInfo_TokenType_descriptor(), name, value);
}
// ===================================================================

class TokenInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.TokenInfo) */ {
 public:
  inline TokenInfo() : TokenInfo(nullptr) {}
  virtual ~TokenInfo();

  TokenInfo(const TokenInfo& from);
  TokenInfo(TokenInfo&& from) noexcept
    : TokenInfo() {
    *this = ::std::move(from);
  }

  inline TokenInfo& operator=(const TokenInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline TokenInfo& operator=(TokenInfo&& from) noexcept {
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
  static const TokenInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TokenInfo* internal_default_instance() {
    return reinterpret_cast<const TokenInfo*>(
               &_TokenInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TokenInfo& a, TokenInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(TokenInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TokenInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TokenInfo* New() const final {
    return CreateMaybeMessage<TokenInfo>(nullptr);
  }

  TokenInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TokenInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TokenInfo& from);
  void MergeFrom(const TokenInfo& from);
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
  void InternalSwap(TokenInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.TokenInfo";
  }
  protected:
  explicit TokenInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_TokenInfo_2eproto);
    return ::descriptor_table_TokenInfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef TokenInfo_TokenType TokenType;
  static constexpr TokenType kInvalid =
    TokenInfo_TokenType_kInvalid;
  static constexpr TokenType kServiceToken =
    TokenInfo_TokenType_kServiceToken;
  static inline bool TokenType_IsValid(int value) {
    return TokenInfo_TokenType_IsValid(value);
  }
  static constexpr TokenType TokenType_MIN =
    TokenInfo_TokenType_TokenType_MIN;
  static constexpr TokenType TokenType_MAX =
    TokenInfo_TokenType_TokenType_MAX;
  static constexpr int TokenType_ARRAYSIZE =
    TokenInfo_TokenType_TokenType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  TokenType_descriptor() {
    return TokenInfo_TokenType_descriptor();
  }
  template<typename T>
  static inline const std::string& TokenType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, TokenType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function TokenType_Name.");
    return TokenInfo_TokenType_Name(enum_t_value);
  }
  static inline bool TokenType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      TokenType* value) {
    return TokenInfo_TokenType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kTokenFieldNumber = 2,
    kTokenTypeFieldNumber = 1,
  };
  // bytes token = 2;
  void clear_token();
  const std::string& token() const;
  void set_token(const std::string& value);
  void set_token(std::string&& value);
  void set_token(const char* value);
  void set_token(const void* value, size_t size);
  std::string* mutable_token();
  std::string* release_token();
  void set_allocated_token(std::string* token);
  private:
  const std::string& _internal_token() const;
  void _internal_set_token(const std::string& value);
  std::string* _internal_mutable_token();
  public:

  // .AcFunDanmu.TokenInfo.TokenType tokenType = 1;
  void clear_tokentype();
  ::AcFunDanmu::TokenInfo_TokenType tokentype() const;
  void set_tokentype(::AcFunDanmu::TokenInfo_TokenType value);
  private:
  ::AcFunDanmu::TokenInfo_TokenType _internal_tokentype() const;
  void _internal_set_tokentype(::AcFunDanmu::TokenInfo_TokenType value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.TokenInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr token_;
  int tokentype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_TokenInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TokenInfo

// .AcFunDanmu.TokenInfo.TokenType tokenType = 1;
inline void TokenInfo::clear_tokentype() {
  tokentype_ = 0;
}
inline ::AcFunDanmu::TokenInfo_TokenType TokenInfo::_internal_tokentype() const {
  return static_cast< ::AcFunDanmu::TokenInfo_TokenType >(tokentype_);
}
inline ::AcFunDanmu::TokenInfo_TokenType TokenInfo::tokentype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.TokenInfo.tokenType)
  return _internal_tokentype();
}
inline void TokenInfo::_internal_set_tokentype(::AcFunDanmu::TokenInfo_TokenType value) {
  
  tokentype_ = value;
}
inline void TokenInfo::set_tokentype(::AcFunDanmu::TokenInfo_TokenType value) {
  _internal_set_tokentype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.TokenInfo.tokenType)
}

// bytes token = 2;
inline void TokenInfo::clear_token() {
  token_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& TokenInfo::token() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.TokenInfo.token)
  return _internal_token();
}
inline void TokenInfo::set_token(const std::string& value) {
  _internal_set_token(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.TokenInfo.token)
}
inline std::string* TokenInfo::mutable_token() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.TokenInfo.token)
  return _internal_mutable_token();
}
inline const std::string& TokenInfo::_internal_token() const {
  return token_.Get();
}
inline void TokenInfo::_internal_set_token(const std::string& value) {
  
  token_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void TokenInfo::set_token(std::string&& value) {
  
  token_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.TokenInfo.token)
}
inline void TokenInfo::set_token(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  token_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.TokenInfo.token)
}
inline void TokenInfo::set_token(const void* value,
    size_t size) {
  
  token_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.TokenInfo.token)
}
inline std::string* TokenInfo::_internal_mutable_token() {
  
  return token_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* TokenInfo::release_token() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.TokenInfo.token)
  return token_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void TokenInfo::set_allocated_token(std::string* token) {
  if (token != nullptr) {
    
  } else {
    
  }
  token_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), token,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.TokenInfo.token)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::TokenInfo_TokenType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::TokenInfo_TokenType>() {
  return ::AcFunDanmu::TokenInfo_TokenType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_TokenInfo_2eproto
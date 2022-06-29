// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionRaw.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SessionRaw_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SessionRaw_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SessionRaw_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SessionRaw_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SessionRaw_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class SessionRaw;
struct SessionRawDefaultTypeInternal;
extern SessionRawDefaultTypeInternal _SessionRaw_default_instance_;
class SessionRaw_RawEntry_DoNotUse;
struct SessionRaw_RawEntry_DoNotUseDefaultTypeInternal;
extern SessionRaw_RawEntry_DoNotUseDefaultTypeInternal _SessionRaw_RawEntry_DoNotUse_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::SessionRaw* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::SessionRaw>(Arena*);
template<> ::AcFunDanmu::Im::Message::SessionRaw_RawEntry_DoNotUse* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::SessionRaw_RawEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class SessionRaw_RawEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<SessionRaw_RawEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BYTES> {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<SessionRaw_RawEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BYTES> SuperType;
  SessionRaw_RawEntry_DoNotUse();
  explicit PROTOBUF_CONSTEXPR SessionRaw_RawEntry_DoNotUse(
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);
  explicit SessionRaw_RawEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const SessionRaw_RawEntry_DoNotUse& other);
  static const SessionRaw_RawEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const SessionRaw_RawEntry_DoNotUse*>(&_SessionRaw_RawEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "AcFunDanmu.Im.Message.SessionRaw.RawEntry.key");
 }
  static bool ValidateValue(void*) { return true; }
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  friend struct ::TableStruct_SessionRaw_2eproto;
};

// -------------------------------------------------------------------

class SessionRaw final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.SessionRaw) */ {
 public:
  inline SessionRaw() : SessionRaw(nullptr) {}
  ~SessionRaw() override;
  explicit PROTOBUF_CONSTEXPR SessionRaw(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SessionRaw(const SessionRaw& from);
  SessionRaw(SessionRaw&& from) noexcept
    : SessionRaw() {
    *this = ::std::move(from);
  }

  inline SessionRaw& operator=(const SessionRaw& from) {
    CopyFrom(from);
    return *this;
  }
  inline SessionRaw& operator=(SessionRaw&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SessionRaw& default_instance() {
    return *internal_default_instance();
  }
  static inline const SessionRaw* internal_default_instance() {
    return reinterpret_cast<const SessionRaw*>(
               &_SessionRaw_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SessionRaw& a, SessionRaw& b) {
    a.Swap(&b);
  }
  inline void Swap(SessionRaw* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SessionRaw* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SessionRaw* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SessionRaw>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SessionRaw& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SessionRaw& from) {
    SessionRaw::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SessionRaw* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.SessionRaw";
  }
  protected:
  explicit SessionRaw(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kRawFieldNumber = 1,
  };
  // map<string, bytes> raw = 1;
  int raw_size() const;
  private:
  int _internal_raw_size() const;
  public:
  void clear_raw();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      _internal_raw() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      _internal_mutable_raw();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      raw() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      mutable_raw();

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.SessionRaw)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::MapField<
        SessionRaw_RawEntry_DoNotUse,
        std::string, std::string,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BYTES> raw_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SessionRaw_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// SessionRaw

// map<string, bytes> raw = 1;
inline int SessionRaw::_internal_raw_size() const {
  return _impl_.raw_.size();
}
inline int SessionRaw::raw_size() const {
  return _internal_raw_size();
}
inline void SessionRaw::clear_raw() {
  _impl_.raw_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
SessionRaw::_internal_raw() const {
  return _impl_.raw_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
SessionRaw::raw() const {
  // @@protoc_insertion_point(field_map:AcFunDanmu.Im.Message.SessionRaw.raw)
  return _internal_raw();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
SessionRaw::_internal_mutable_raw() {
  return _impl_.raw_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
SessionRaw::mutable_raw() {
  // @@protoc_insertion_point(field_mutable_map:AcFunDanmu.Im.Message.SessionRaw.raw)
  return _internal_mutable_raw();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SessionRaw_2eproto
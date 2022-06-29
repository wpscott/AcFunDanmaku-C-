// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalAuthorResume.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalAuthorResume_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalAuthorResume_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommonStateSignalAuthorResume_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonStateSignalAuthorResume_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalAuthorResume_2eproto;
namespace AcFunDanmu {
class CommonStateSignalAuthorResume;
struct CommonStateSignalAuthorResumeDefaultTypeInternal;
extern CommonStateSignalAuthorResumeDefaultTypeInternal _CommonStateSignalAuthorResume_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonStateSignalAuthorResume* Arena::CreateMaybeMessage<::AcFunDanmu::CommonStateSignalAuthorResume>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalAuthorResume final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonStateSignalAuthorResume) */ {
 public:
  inline CommonStateSignalAuthorResume() : CommonStateSignalAuthorResume(nullptr) {}
  ~CommonStateSignalAuthorResume() override;
  explicit PROTOBUF_CONSTEXPR CommonStateSignalAuthorResume(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommonStateSignalAuthorResume(const CommonStateSignalAuthorResume& from);
  CommonStateSignalAuthorResume(CommonStateSignalAuthorResume&& from) noexcept
    : CommonStateSignalAuthorResume() {
    *this = ::std::move(from);
  }

  inline CommonStateSignalAuthorResume& operator=(const CommonStateSignalAuthorResume& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonStateSignalAuthorResume& operator=(CommonStateSignalAuthorResume&& from) noexcept {
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
  static const CommonStateSignalAuthorResume& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommonStateSignalAuthorResume* internal_default_instance() {
    return reinterpret_cast<const CommonStateSignalAuthorResume*>(
               &_CommonStateSignalAuthorResume_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonStateSignalAuthorResume& a, CommonStateSignalAuthorResume& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonStateSignalAuthorResume* other) {
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
  void UnsafeArenaSwap(CommonStateSignalAuthorResume* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CommonStateSignalAuthorResume* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CommonStateSignalAuthorResume>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CommonStateSignalAuthorResume& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CommonStateSignalAuthorResume& from) {
    CommonStateSignalAuthorResume::MergeImpl(*this, from);
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
  void InternalSwap(CommonStateSignalAuthorResume* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonStateSignalAuthorResume";
  }
  protected:
  explicit CommonStateSignalAuthorResume(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
  };
  // int64 a = 1;
  void clear_a();
  int64_t a() const;
  void set_a(int64_t value);
  private:
  int64_t _internal_a() const;
  void _internal_set_a(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonStateSignalAuthorResume)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int64_t a_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_CommonStateSignalAuthorResume_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonStateSignalAuthorResume

// int64 a = 1;
inline void CommonStateSignalAuthorResume::clear_a() {
  _impl_.a_ = int64_t{0};
}
inline int64_t CommonStateSignalAuthorResume::_internal_a() const {
  return _impl_.a_;
}
inline int64_t CommonStateSignalAuthorResume::a() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalAuthorResume.a)
  return _internal_a();
}
inline void CommonStateSignalAuthorResume::_internal_set_a(int64_t value) {
  
  _impl_.a_ = value;
}
inline void CommonStateSignalAuthorResume::set_a(int64_t value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalAuthorResume.a)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalAuthorResume_2eproto
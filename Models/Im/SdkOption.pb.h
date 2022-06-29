// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SdkOption.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SdkOption_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SdkOption_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_SdkOption_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SdkOption_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SdkOption_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Basic {
class SdkOption;
struct SdkOptionDefaultTypeInternal;
extern SdkOptionDefaultTypeInternal _SdkOption_default_instance_;
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Basic::SdkOption* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Basic::SdkOption>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Basic {

// ===================================================================

class SdkOption final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Basic.SdkOption) */ {
 public:
  inline SdkOption() : SdkOption(nullptr) {}
  ~SdkOption() override;
  explicit PROTOBUF_CONSTEXPR SdkOption(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SdkOption(const SdkOption& from);
  SdkOption(SdkOption&& from) noexcept
    : SdkOption() {
    *this = ::std::move(from);
  }

  inline SdkOption& operator=(const SdkOption& from) {
    CopyFrom(from);
    return *this;
  }
  inline SdkOption& operator=(SdkOption&& from) noexcept {
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
  static const SdkOption& default_instance() {
    return *internal_default_instance();
  }
  static inline const SdkOption* internal_default_instance() {
    return reinterpret_cast<const SdkOption*>(
               &_SdkOption_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SdkOption& a, SdkOption& b) {
    a.Swap(&b);
  }
  inline void Swap(SdkOption* other) {
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
  void UnsafeArenaSwap(SdkOption* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SdkOption* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SdkOption>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SdkOption& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SdkOption& from) {
    SdkOption::MergeImpl(*this, from);
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
  void InternalSwap(SdkOption* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Basic.SdkOption";
  }
  protected:
  explicit SdkOption(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNetCheckServersFieldNumber = 4,
    kReportSecurityFieldNumber = 2,
    kReportIntervalSecondsFieldNumber = 1,
    kLz4CompressionThresholdBytesFieldNumber = 3,
  };
  // repeated string netCheckServers = 4;
  int netcheckservers_size() const;
  private:
  int _internal_netcheckservers_size() const;
  public:
  void clear_netcheckservers();
  const std::string& netcheckservers(int index) const;
  std::string* mutable_netcheckservers(int index);
  void set_netcheckservers(int index, const std::string& value);
  void set_netcheckservers(int index, std::string&& value);
  void set_netcheckservers(int index, const char* value);
  void set_netcheckservers(int index, const char* value, size_t size);
  std::string* add_netcheckservers();
  void add_netcheckservers(const std::string& value);
  void add_netcheckservers(std::string&& value);
  void add_netcheckservers(const char* value);
  void add_netcheckservers(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& netcheckservers() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_netcheckservers();
  private:
  const std::string& _internal_netcheckservers(int index) const;
  std::string* _internal_add_netcheckservers();
  public:

  // string reportSecurity = 2;
  void clear_reportsecurity();
  const std::string& reportsecurity() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_reportsecurity(ArgT0&& arg0, ArgT... args);
  std::string* mutable_reportsecurity();
  PROTOBUF_NODISCARD std::string* release_reportsecurity();
  void set_allocated_reportsecurity(std::string* reportsecurity);
  private:
  const std::string& _internal_reportsecurity() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_reportsecurity(const std::string& value);
  std::string* _internal_mutable_reportsecurity();
  public:

  // int32 reportIntervalSeconds = 1;
  void clear_reportintervalseconds();
  int32_t reportintervalseconds() const;
  void set_reportintervalseconds(int32_t value);
  private:
  int32_t _internal_reportintervalseconds() const;
  void _internal_set_reportintervalseconds(int32_t value);
  public:

  // int32 lz4CompressionThresholdBytes = 3;
  void clear_lz4compressionthresholdbytes();
  int32_t lz4compressionthresholdbytes() const;
  void set_lz4compressionthresholdbytes(int32_t value);
  private:
  int32_t _internal_lz4compressionthresholdbytes() const;
  void _internal_set_lz4compressionthresholdbytes(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Basic.SdkOption)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> netcheckservers_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr reportsecurity_;
    int32_t reportintervalseconds_;
    int32_t lz4compressionthresholdbytes_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SdkOption_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SdkOption

// int32 reportIntervalSeconds = 1;
inline void SdkOption::clear_reportintervalseconds() {
  _impl_.reportintervalseconds_ = 0;
}
inline int32_t SdkOption::_internal_reportintervalseconds() const {
  return _impl_.reportintervalseconds_;
}
inline int32_t SdkOption::reportintervalseconds() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.SdkOption.reportIntervalSeconds)
  return _internal_reportintervalseconds();
}
inline void SdkOption::_internal_set_reportintervalseconds(int32_t value) {
  
  _impl_.reportintervalseconds_ = value;
}
inline void SdkOption::set_reportintervalseconds(int32_t value) {
  _internal_set_reportintervalseconds(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.SdkOption.reportIntervalSeconds)
}

// string reportSecurity = 2;
inline void SdkOption::clear_reportsecurity() {
  _impl_.reportsecurity_.ClearToEmpty();
}
inline const std::string& SdkOption::reportsecurity() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.SdkOption.reportSecurity)
  return _internal_reportsecurity();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SdkOption::set_reportsecurity(ArgT0&& arg0, ArgT... args) {
 
 _impl_.reportsecurity_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.SdkOption.reportSecurity)
}
inline std::string* SdkOption::mutable_reportsecurity() {
  std::string* _s = _internal_mutable_reportsecurity();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Basic.SdkOption.reportSecurity)
  return _s;
}
inline const std::string& SdkOption::_internal_reportsecurity() const {
  return _impl_.reportsecurity_.Get();
}
inline void SdkOption::_internal_set_reportsecurity(const std::string& value) {
  
  _impl_.reportsecurity_.Set(value, GetArenaForAllocation());
}
inline std::string* SdkOption::_internal_mutable_reportsecurity() {
  
  return _impl_.reportsecurity_.Mutable(GetArenaForAllocation());
}
inline std::string* SdkOption::release_reportsecurity() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Basic.SdkOption.reportSecurity)
  return _impl_.reportsecurity_.Release();
}
inline void SdkOption::set_allocated_reportsecurity(std::string* reportsecurity) {
  if (reportsecurity != nullptr) {
    
  } else {
    
  }
  _impl_.reportsecurity_.SetAllocated(reportsecurity, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.reportsecurity_.IsDefault()) {
    _impl_.reportsecurity_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Basic.SdkOption.reportSecurity)
}

// int32 lz4CompressionThresholdBytes = 3;
inline void SdkOption::clear_lz4compressionthresholdbytes() {
  _impl_.lz4compressionthresholdbytes_ = 0;
}
inline int32_t SdkOption::_internal_lz4compressionthresholdbytes() const {
  return _impl_.lz4compressionthresholdbytes_;
}
inline int32_t SdkOption::lz4compressionthresholdbytes() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.SdkOption.lz4CompressionThresholdBytes)
  return _internal_lz4compressionthresholdbytes();
}
inline void SdkOption::_internal_set_lz4compressionthresholdbytes(int32_t value) {
  
  _impl_.lz4compressionthresholdbytes_ = value;
}
inline void SdkOption::set_lz4compressionthresholdbytes(int32_t value) {
  _internal_set_lz4compressionthresholdbytes(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.SdkOption.lz4CompressionThresholdBytes)
}

// repeated string netCheckServers = 4;
inline int SdkOption::_internal_netcheckservers_size() const {
  return _impl_.netcheckservers_.size();
}
inline int SdkOption::netcheckservers_size() const {
  return _internal_netcheckservers_size();
}
inline void SdkOption::clear_netcheckservers() {
  _impl_.netcheckservers_.Clear();
}
inline std::string* SdkOption::add_netcheckservers() {
  std::string* _s = _internal_add_netcheckservers();
  // @@protoc_insertion_point(field_add_mutable:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
  return _s;
}
inline const std::string& SdkOption::_internal_netcheckservers(int index) const {
  return _impl_.netcheckservers_.Get(index);
}
inline const std::string& SdkOption::netcheckservers(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
  return _internal_netcheckservers(index);
}
inline std::string* SdkOption::mutable_netcheckservers(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
  return _impl_.netcheckservers_.Mutable(index);
}
inline void SdkOption::set_netcheckservers(int index, const std::string& value) {
  _impl_.netcheckservers_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
}
inline void SdkOption::set_netcheckservers(int index, std::string&& value) {
  _impl_.netcheckservers_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
}
inline void SdkOption::set_netcheckservers(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.netcheckservers_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
}
inline void SdkOption::set_netcheckservers(int index, const char* value, size_t size) {
  _impl_.netcheckservers_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
}
inline std::string* SdkOption::_internal_add_netcheckservers() {
  return _impl_.netcheckservers_.Add();
}
inline void SdkOption::add_netcheckservers(const std::string& value) {
  _impl_.netcheckservers_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
}
inline void SdkOption::add_netcheckservers(std::string&& value) {
  _impl_.netcheckservers_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
}
inline void SdkOption::add_netcheckservers(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.netcheckservers_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
}
inline void SdkOption::add_netcheckservers(const char* value, size_t size) {
  _impl_.netcheckservers_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
SdkOption::netcheckservers() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
  return _impl_.netcheckservers_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
SdkOption::mutable_netcheckservers() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Basic.SdkOption.netCheckServers)
  return &_impl_.netcheckservers_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SdkOption_2eproto
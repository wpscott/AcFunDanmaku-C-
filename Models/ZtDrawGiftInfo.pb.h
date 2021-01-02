// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtDrawGiftInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ZtDrawGiftInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ZtDrawGiftInfo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ZtDrawGiftInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ZtDrawGiftInfo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtDrawGiftInfo_2eproto;
namespace AcFunDanmu {
class ZtDrawGiftInfo;
class ZtDrawGiftInfoDefaultTypeInternal;
extern ZtDrawGiftInfoDefaultTypeInternal _ZtDrawGiftInfo_default_instance_;
class ZtDrawGiftInfo_ZtDrawPoint;
class ZtDrawGiftInfo_ZtDrawPointDefaultTypeInternal;
extern ZtDrawGiftInfo_ZtDrawPointDefaultTypeInternal _ZtDrawGiftInfo_ZtDrawPoint_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::ZtDrawGiftInfo* Arena::CreateMaybeMessage<::AcFunDanmu::ZtDrawGiftInfo>(Arena*);
template<> ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* Arena::CreateMaybeMessage<::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class ZtDrawGiftInfo_ZtDrawPoint PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint) */ {
 public:
  inline ZtDrawGiftInfo_ZtDrawPoint() : ZtDrawGiftInfo_ZtDrawPoint(nullptr) {}
  virtual ~ZtDrawGiftInfo_ZtDrawPoint();

  ZtDrawGiftInfo_ZtDrawPoint(const ZtDrawGiftInfo_ZtDrawPoint& from);
  ZtDrawGiftInfo_ZtDrawPoint(ZtDrawGiftInfo_ZtDrawPoint&& from) noexcept
    : ZtDrawGiftInfo_ZtDrawPoint() {
    *this = ::std::move(from);
  }

  inline ZtDrawGiftInfo_ZtDrawPoint& operator=(const ZtDrawGiftInfo_ZtDrawPoint& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtDrawGiftInfo_ZtDrawPoint& operator=(ZtDrawGiftInfo_ZtDrawPoint&& from) noexcept {
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
  static const ZtDrawGiftInfo_ZtDrawPoint& default_instance();

  static inline const ZtDrawGiftInfo_ZtDrawPoint* internal_default_instance() {
    return reinterpret_cast<const ZtDrawGiftInfo_ZtDrawPoint*>(
               &_ZtDrawGiftInfo_ZtDrawPoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ZtDrawGiftInfo_ZtDrawPoint& a, ZtDrawGiftInfo_ZtDrawPoint& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtDrawGiftInfo_ZtDrawPoint* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ZtDrawGiftInfo_ZtDrawPoint* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ZtDrawGiftInfo_ZtDrawPoint* New() const final {
    return CreateMaybeMessage<ZtDrawGiftInfo_ZtDrawPoint>(nullptr);
  }

  ZtDrawGiftInfo_ZtDrawPoint* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ZtDrawGiftInfo_ZtDrawPoint>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ZtDrawGiftInfo_ZtDrawPoint& from);
  void MergeFrom(const ZtDrawGiftInfo_ZtDrawPoint& from);
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
  void InternalSwap(ZtDrawGiftInfo_ZtDrawPoint* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint";
  }
  protected:
  explicit ZtDrawGiftInfo_ZtDrawPoint(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ZtDrawGiftInfo_2eproto);
    return ::descriptor_table_ZtDrawGiftInfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMarginLeftFieldNumber = 1,
    kMarginTopFieldNumber = 2,
    kScaleRatioFieldNumber = 3,
    kHandupFieldNumber = 4,
  };
  // int64 marginLeft = 1;
  void clear_marginleft();
  ::PROTOBUF_NAMESPACE_ID::int64 marginleft() const;
  void set_marginleft(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_marginleft() const;
  void _internal_set_marginleft(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 marginTop = 2;
  void clear_margintop();
  ::PROTOBUF_NAMESPACE_ID::int64 margintop() const;
  void set_margintop(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_margintop() const;
  void _internal_set_margintop(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // double scaleRatio = 3;
  void clear_scaleratio();
  double scaleratio() const;
  void set_scaleratio(double value);
  private:
  double _internal_scaleratio() const;
  void _internal_set_scaleratio(double value);
  public:

  // bool handup = 4;
  void clear_handup();
  bool handup() const;
  void set_handup(bool value);
  private:
  bool _internal_handup() const;
  void _internal_set_handup(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int64 marginleft_;
  ::PROTOBUF_NAMESPACE_ID::int64 margintop_;
  double scaleratio_;
  bool handup_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ZtDrawGiftInfo_2eproto;
};
// -------------------------------------------------------------------

class ZtDrawGiftInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtDrawGiftInfo) */ {
 public:
  inline ZtDrawGiftInfo() : ZtDrawGiftInfo(nullptr) {}
  virtual ~ZtDrawGiftInfo();

  ZtDrawGiftInfo(const ZtDrawGiftInfo& from);
  ZtDrawGiftInfo(ZtDrawGiftInfo&& from) noexcept
    : ZtDrawGiftInfo() {
    *this = ::std::move(from);
  }

  inline ZtDrawGiftInfo& operator=(const ZtDrawGiftInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtDrawGiftInfo& operator=(ZtDrawGiftInfo&& from) noexcept {
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
  static const ZtDrawGiftInfo& default_instance();

  static inline const ZtDrawGiftInfo* internal_default_instance() {
    return reinterpret_cast<const ZtDrawGiftInfo*>(
               &_ZtDrawGiftInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ZtDrawGiftInfo& a, ZtDrawGiftInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtDrawGiftInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ZtDrawGiftInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ZtDrawGiftInfo* New() const final {
    return CreateMaybeMessage<ZtDrawGiftInfo>(nullptr);
  }

  ZtDrawGiftInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ZtDrawGiftInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ZtDrawGiftInfo& from);
  void MergeFrom(const ZtDrawGiftInfo& from);
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
  void InternalSwap(ZtDrawGiftInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtDrawGiftInfo";
  }
  protected:
  explicit ZtDrawGiftInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ZtDrawGiftInfo_2eproto);
    return ::descriptor_table_ZtDrawGiftInfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef ZtDrawGiftInfo_ZtDrawPoint ZtDrawPoint;

  // accessors -------------------------------------------------------

  enum : int {
    kDrawPointFieldNumber = 3,
    kScreenWidthFieldNumber = 1,
    kScreenHeightFieldNumber = 2,
  };
  // repeated .AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint drawPoint = 3;
  int drawpoint_size() const;
  private:
  int _internal_drawpoint_size() const;
  public:
  void clear_drawpoint();
  ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* mutable_drawpoint(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint >*
      mutable_drawpoint();
  private:
  const ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint& _internal_drawpoint(int index) const;
  ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* _internal_add_drawpoint();
  public:
  const ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint& drawpoint(int index) const;
  ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* add_drawpoint();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint >&
      drawpoint() const;

  // int64 screenWidth = 1;
  void clear_screenwidth();
  ::PROTOBUF_NAMESPACE_ID::int64 screenwidth() const;
  void set_screenwidth(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_screenwidth() const;
  void _internal_set_screenwidth(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 screenHeight = 2;
  void clear_screenheight();
  ::PROTOBUF_NAMESPACE_ID::int64 screenheight() const;
  void set_screenheight(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_screenheight() const;
  void _internal_set_screenheight(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtDrawGiftInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint > drawpoint_;
  ::PROTOBUF_NAMESPACE_ID::int64 screenwidth_;
  ::PROTOBUF_NAMESPACE_ID::int64 screenheight_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ZtDrawGiftInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ZtDrawGiftInfo_ZtDrawPoint

// int64 marginLeft = 1;
inline void ZtDrawGiftInfo_ZtDrawPoint::clear_marginleft() {
  marginleft_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtDrawGiftInfo_ZtDrawPoint::_internal_marginleft() const {
  return marginleft_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtDrawGiftInfo_ZtDrawPoint::marginleft() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.marginLeft)
  return _internal_marginleft();
}
inline void ZtDrawGiftInfo_ZtDrawPoint::_internal_set_marginleft(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  marginleft_ = value;
}
inline void ZtDrawGiftInfo_ZtDrawPoint::set_marginleft(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_marginleft(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.marginLeft)
}

// int64 marginTop = 2;
inline void ZtDrawGiftInfo_ZtDrawPoint::clear_margintop() {
  margintop_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtDrawGiftInfo_ZtDrawPoint::_internal_margintop() const {
  return margintop_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtDrawGiftInfo_ZtDrawPoint::margintop() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.marginTop)
  return _internal_margintop();
}
inline void ZtDrawGiftInfo_ZtDrawPoint::_internal_set_margintop(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  margintop_ = value;
}
inline void ZtDrawGiftInfo_ZtDrawPoint::set_margintop(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_margintop(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.marginTop)
}

// double scaleRatio = 3;
inline void ZtDrawGiftInfo_ZtDrawPoint::clear_scaleratio() {
  scaleratio_ = 0;
}
inline double ZtDrawGiftInfo_ZtDrawPoint::_internal_scaleratio() const {
  return scaleratio_;
}
inline double ZtDrawGiftInfo_ZtDrawPoint::scaleratio() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.scaleRatio)
  return _internal_scaleratio();
}
inline void ZtDrawGiftInfo_ZtDrawPoint::_internal_set_scaleratio(double value) {
  
  scaleratio_ = value;
}
inline void ZtDrawGiftInfo_ZtDrawPoint::set_scaleratio(double value) {
  _internal_set_scaleratio(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.scaleRatio)
}

// bool handup = 4;
inline void ZtDrawGiftInfo_ZtDrawPoint::clear_handup() {
  handup_ = false;
}
inline bool ZtDrawGiftInfo_ZtDrawPoint::_internal_handup() const {
  return handup_;
}
inline bool ZtDrawGiftInfo_ZtDrawPoint::handup() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.handup)
  return _internal_handup();
}
inline void ZtDrawGiftInfo_ZtDrawPoint::_internal_set_handup(bool value) {
  
  handup_ = value;
}
inline void ZtDrawGiftInfo_ZtDrawPoint::set_handup(bool value) {
  _internal_set_handup(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint.handup)
}

// -------------------------------------------------------------------

// ZtDrawGiftInfo

// int64 screenWidth = 1;
inline void ZtDrawGiftInfo::clear_screenwidth() {
  screenwidth_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtDrawGiftInfo::_internal_screenwidth() const {
  return screenwidth_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtDrawGiftInfo::screenwidth() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.screenWidth)
  return _internal_screenwidth();
}
inline void ZtDrawGiftInfo::_internal_set_screenwidth(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  screenwidth_ = value;
}
inline void ZtDrawGiftInfo::set_screenwidth(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_screenwidth(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.screenWidth)
}

// int64 screenHeight = 2;
inline void ZtDrawGiftInfo::clear_screenheight() {
  screenheight_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtDrawGiftInfo::_internal_screenheight() const {
  return screenheight_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ZtDrawGiftInfo::screenheight() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.screenHeight)
  return _internal_screenheight();
}
inline void ZtDrawGiftInfo::_internal_set_screenheight(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  screenheight_ = value;
}
inline void ZtDrawGiftInfo::set_screenheight(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_screenheight(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtDrawGiftInfo.screenHeight)
}

// repeated .AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint drawPoint = 3;
inline int ZtDrawGiftInfo::_internal_drawpoint_size() const {
  return drawpoint_.size();
}
inline int ZtDrawGiftInfo::drawpoint_size() const {
  return _internal_drawpoint_size();
}
inline void ZtDrawGiftInfo::clear_drawpoint() {
  drawpoint_.Clear();
}
inline ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* ZtDrawGiftInfo::mutable_drawpoint(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtDrawGiftInfo.drawPoint)
  return drawpoint_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint >*
ZtDrawGiftInfo::mutable_drawpoint() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.ZtDrawGiftInfo.drawPoint)
  return &drawpoint_;
}
inline const ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint& ZtDrawGiftInfo::_internal_drawpoint(int index) const {
  return drawpoint_.Get(index);
}
inline const ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint& ZtDrawGiftInfo::drawpoint(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtDrawGiftInfo.drawPoint)
  return _internal_drawpoint(index);
}
inline ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* ZtDrawGiftInfo::_internal_add_drawpoint() {
  return drawpoint_.Add();
}
inline ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* ZtDrawGiftInfo::add_drawpoint() {
  // @@protoc_insertion_point(field_add:AcFunDanmu.ZtDrawGiftInfo.drawPoint)
  return _internal_add_drawpoint();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint >&
ZtDrawGiftInfo::drawpoint() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.ZtDrawGiftInfo.drawPoint)
  return drawpoint_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ZtDrawGiftInfo_2eproto
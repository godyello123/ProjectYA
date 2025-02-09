// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protocol.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Protocol_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Protocol_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "Enum.pb.h"
#include "Struct.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Protocol_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Protocol_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Protocol_2eproto;
namespace Protocol {
class C2P_RequestLogin;
struct C2P_RequestLoginDefaultTypeInternal;
extern C2P_RequestLoginDefaultTypeInternal _C2P_RequestLogin_default_instance_;
class P2C_ResultLogin;
struct P2C_ResultLoginDefaultTypeInternal;
extern P2C_ResultLoginDefaultTypeInternal _P2C_ResultLogin_default_instance_;
}  // namespace Protocol
PROTOBUF_NAMESPACE_OPEN
template<> ::Protocol::C2P_RequestLogin* Arena::CreateMaybeMessage<::Protocol::C2P_RequestLogin>(Arena*);
template<> ::Protocol::P2C_ResultLogin* Arena::CreateMaybeMessage<::Protocol::P2C_ResultLogin>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Protocol {

// ===================================================================

class C2P_RequestLogin final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Protocol.C2P_RequestLogin) */ {
 public:
  inline C2P_RequestLogin() : C2P_RequestLogin(nullptr) {}
  ~C2P_RequestLogin() override;
  explicit constexpr C2P_RequestLogin(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  C2P_RequestLogin(const C2P_RequestLogin& from);
  C2P_RequestLogin(C2P_RequestLogin&& from) noexcept
    : C2P_RequestLogin() {
    *this = ::std::move(from);
  }

  inline C2P_RequestLogin& operator=(const C2P_RequestLogin& from) {
    CopyFrom(from);
    return *this;
  }
  inline C2P_RequestLogin& operator=(C2P_RequestLogin&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
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
  static const C2P_RequestLogin& default_instance() {
    return *internal_default_instance();
  }
  static inline const C2P_RequestLogin* internal_default_instance() {
    return reinterpret_cast<const C2P_RequestLogin*>(
               &_C2P_RequestLogin_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(C2P_RequestLogin& a, C2P_RequestLogin& b) {
    a.Swap(&b);
  }
  inline void Swap(C2P_RequestLogin* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(C2P_RequestLogin* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline C2P_RequestLogin* New() const final {
    return new C2P_RequestLogin();
  }

  C2P_RequestLogin* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<C2P_RequestLogin>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const C2P_RequestLogin& from);
  void MergeFrom(const C2P_RequestLogin& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(C2P_RequestLogin* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Protocol.C2P_RequestLogin";
  }
  protected:
  explicit C2P_RequestLogin(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kPwFieldNumber = 2,
  };
  // string id = 1;
  void clear_id();
  const std::string& id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_id();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // string pw = 2;
  void clear_pw();
  const std::string& pw() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_pw(ArgT0&& arg0, ArgT... args);
  std::string* mutable_pw();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_pw();
  void set_allocated_pw(std::string* pw);
  private:
  const std::string& _internal_pw() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_pw(const std::string& value);
  std::string* _internal_mutable_pw();
  public:

  // @@protoc_insertion_point(class_scope:Protocol.C2P_RequestLogin)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr pw_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Protocol_2eproto;
};
// -------------------------------------------------------------------

class P2C_ResultLogin final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Protocol.P2C_ResultLogin) */ {
 public:
  inline P2C_ResultLogin() : P2C_ResultLogin(nullptr) {}
  ~P2C_ResultLogin() override;
  explicit constexpr P2C_ResultLogin(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  P2C_ResultLogin(const P2C_ResultLogin& from);
  P2C_ResultLogin(P2C_ResultLogin&& from) noexcept
    : P2C_ResultLogin() {
    *this = ::std::move(from);
  }

  inline P2C_ResultLogin& operator=(const P2C_ResultLogin& from) {
    CopyFrom(from);
    return *this;
  }
  inline P2C_ResultLogin& operator=(P2C_ResultLogin&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
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
  static const P2C_ResultLogin& default_instance() {
    return *internal_default_instance();
  }
  static inline const P2C_ResultLogin* internal_default_instance() {
    return reinterpret_cast<const P2C_ResultLogin*>(
               &_P2C_ResultLogin_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(P2C_ResultLogin& a, P2C_ResultLogin& b) {
    a.Swap(&b);
  }
  inline void Swap(P2C_ResultLogin* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(P2C_ResultLogin* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline P2C_ResultLogin* New() const final {
    return new P2C_ResultLogin();
  }

  P2C_ResultLogin* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<P2C_ResultLogin>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const P2C_ResultLogin& from);
  void MergeFrom(const P2C_ResultLogin& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(P2C_ResultLogin* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Protocol.P2C_ResultLogin";
  }
  protected:
  explicit P2C_ResultLogin(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
  };
  // uint32 result = 1;
  void clear_result();
  ::PROTOBUF_NAMESPACE_ID::uint32 result() const;
  void set_result(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_result() const;
  void _internal_set_result(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:Protocol.P2C_ResultLogin)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint32 result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Protocol_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// C2P_RequestLogin

// string id = 1;
inline void C2P_RequestLogin::clear_id() {
  id_.ClearToEmpty();
}
inline const std::string& C2P_RequestLogin::id() const {
  // @@protoc_insertion_point(field_get:Protocol.C2P_RequestLogin.id)
  return _internal_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void C2P_RequestLogin::set_id(ArgT0&& arg0, ArgT... args) {
 
 id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Protocol.C2P_RequestLogin.id)
}
inline std::string* C2P_RequestLogin::mutable_id() {
  // @@protoc_insertion_point(field_mutable:Protocol.C2P_RequestLogin.id)
  return _internal_mutable_id();
}
inline const std::string& C2P_RequestLogin::_internal_id() const {
  return id_.Get();
}
inline void C2P_RequestLogin::_internal_set_id(const std::string& value) {
  
  id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* C2P_RequestLogin::_internal_mutable_id() {
  
  return id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* C2P_RequestLogin::release_id() {
  // @@protoc_insertion_point(field_release:Protocol.C2P_RequestLogin.id)
  return id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void C2P_RequestLogin::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), id,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Protocol.C2P_RequestLogin.id)
}

// string pw = 2;
inline void C2P_RequestLogin::clear_pw() {
  pw_.ClearToEmpty();
}
inline const std::string& C2P_RequestLogin::pw() const {
  // @@protoc_insertion_point(field_get:Protocol.C2P_RequestLogin.pw)
  return _internal_pw();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void C2P_RequestLogin::set_pw(ArgT0&& arg0, ArgT... args) {
 
 pw_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Protocol.C2P_RequestLogin.pw)
}
inline std::string* C2P_RequestLogin::mutable_pw() {
  // @@protoc_insertion_point(field_mutable:Protocol.C2P_RequestLogin.pw)
  return _internal_mutable_pw();
}
inline const std::string& C2P_RequestLogin::_internal_pw() const {
  return pw_.Get();
}
inline void C2P_RequestLogin::_internal_set_pw(const std::string& value) {
  
  pw_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* C2P_RequestLogin::_internal_mutable_pw() {
  
  return pw_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* C2P_RequestLogin::release_pw() {
  // @@protoc_insertion_point(field_release:Protocol.C2P_RequestLogin.pw)
  return pw_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void C2P_RequestLogin::set_allocated_pw(std::string* pw) {
  if (pw != nullptr) {
    
  } else {
    
  }
  pw_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), pw,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Protocol.C2P_RequestLogin.pw)
}

// -------------------------------------------------------------------

// P2C_ResultLogin

// uint32 result = 1;
inline void P2C_ResultLogin::clear_result() {
  result_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 P2C_ResultLogin::_internal_result() const {
  return result_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 P2C_ResultLogin::result() const {
  // @@protoc_insertion_point(field_get:Protocol.P2C_ResultLogin.result)
  return _internal_result();
}
inline void P2C_ResultLogin::_internal_set_result(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  result_ = value;
}
inline void P2C_ResultLogin::set_result(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:Protocol.P2C_ResultLogin.result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Protocol_2eproto

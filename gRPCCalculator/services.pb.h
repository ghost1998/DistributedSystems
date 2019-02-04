// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: services.proto

#ifndef PROTOBUF_INCLUDED_services_2eproto
#define PROTOBUF_INCLUDED_services_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3006001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_services_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_services_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_services_2eproto();
namespace solver {
class Expression;
class ExpressionDefaultTypeInternal;
extern ExpressionDefaultTypeInternal _Expression_default_instance_;
class Result;
class ResultDefaultTypeInternal;
extern ResultDefaultTypeInternal _Result_default_instance_;
}  // namespace solver
namespace google {
namespace protobuf {
template<> ::solver::Expression* Arena::CreateMaybeMessage<::solver::Expression>(Arena*);
template<> ::solver::Result* Arena::CreateMaybeMessage<::solver::Result>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace solver {

// ===================================================================

class Expression final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:solver.Expression) */ {
 public:
  Expression();
  virtual ~Expression();

  Expression(const Expression& from);

  inline Expression& operator=(const Expression& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Expression(Expression&& from) noexcept
    : Expression() {
    *this = ::std::move(from);
  }

  inline Expression& operator=(Expression&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Expression& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Expression* internal_default_instance() {
    return reinterpret_cast<const Expression*>(
               &_Expression_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Expression* other);
  friend void swap(Expression& a, Expression& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Expression* New() const final {
    return CreateMaybeMessage<Expression>(nullptr);
  }

  Expression* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Expression>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Expression& from);
  void MergeFrom(const Expression& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Expression* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string infix = 1;
  void clear_infix();
  static const int kInfixFieldNumber = 1;
  const ::std::string& infix() const;
  void set_infix(const ::std::string& value);
  #if LANG_CXX11
  void set_infix(::std::string&& value);
  #endif
  void set_infix(const char* value);
  void set_infix(const char* value, size_t size);
  ::std::string* mutable_infix();
  ::std::string* release_infix();
  void set_allocated_infix(::std::string* infix);

  // @@protoc_insertion_point(class_scope:solver.Expression)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr infix_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_services_2eproto;
};
// -------------------------------------------------------------------

class Result final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:solver.Result) */ {
 public:
  Result();
  virtual ~Result();

  Result(const Result& from);

  inline Result& operator=(const Result& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Result(Result&& from) noexcept
    : Result() {
    *this = ::std::move(from);
  }

  inline Result& operator=(Result&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Result& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Result* internal_default_instance() {
    return reinterpret_cast<const Result*>(
               &_Result_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Result* other);
  friend void swap(Result& a, Result& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Result* New() const final {
    return CreateMaybeMessage<Result>(nullptr);
  }

  Result* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Result>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Result& from);
  void MergeFrom(const Result& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Result* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  const ::std::string& result() const;
  void set_result(const ::std::string& value);
  #if LANG_CXX11
  void set_result(::std::string&& value);
  #endif
  void set_result(const char* value);
  void set_result(const char* value, size_t size);
  ::std::string* mutable_result();
  ::std::string* release_result();
  void set_allocated_result(::std::string* result);

  // @@protoc_insertion_point(class_scope:solver.Result)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr result_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_services_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Expression

// string infix = 1;
inline void Expression::clear_infix() {
  infix_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Expression::infix() const {
  // @@protoc_insertion_point(field_get:solver.Expression.infix)
  return infix_.GetNoArena();
}
inline void Expression::set_infix(const ::std::string& value) {
  
  infix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:solver.Expression.infix)
}
#if LANG_CXX11
inline void Expression::set_infix(::std::string&& value) {
  
  infix_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:solver.Expression.infix)
}
#endif
inline void Expression::set_infix(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  infix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:solver.Expression.infix)
}
inline void Expression::set_infix(const char* value, size_t size) {
  
  infix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:solver.Expression.infix)
}
inline ::std::string* Expression::mutable_infix() {
  
  // @@protoc_insertion_point(field_mutable:solver.Expression.infix)
  return infix_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Expression::release_infix() {
  // @@protoc_insertion_point(field_release:solver.Expression.infix)
  
  return infix_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Expression::set_allocated_infix(::std::string* infix) {
  if (infix != nullptr) {
    
  } else {
    
  }
  infix_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), infix);
  // @@protoc_insertion_point(field_set_allocated:solver.Expression.infix)
}

// -------------------------------------------------------------------

// Result

// string result = 1;
inline void Result::clear_result() {
  result_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Result::result() const {
  // @@protoc_insertion_point(field_get:solver.Result.result)
  return result_.GetNoArena();
}
inline void Result::set_result(const ::std::string& value) {
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:solver.Result.result)
}
#if LANG_CXX11
inline void Result::set_result(::std::string&& value) {
  
  result_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:solver.Result.result)
}
#endif
inline void Result::set_result(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:solver.Result.result)
}
inline void Result::set_result(const char* value, size_t size) {
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:solver.Result.result)
}
inline ::std::string* Result::mutable_result() {
  
  // @@protoc_insertion_point(field_mutable:solver.Result.result)
  return result_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Result::release_result() {
  // @@protoc_insertion_point(field_release:solver.Result.result)
  
  return result_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Result::set_allocated_result(::std::string* result) {
  if (result != nullptr) {
    
  } else {
    
  }
  result_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), result);
  // @@protoc_insertion_point(field_set_allocated:solver.Result.result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace solver

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_services_2eproto

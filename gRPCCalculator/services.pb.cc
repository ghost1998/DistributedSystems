// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: services.proto

#include "services.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace solver {
class ExpressionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Expression> _instance;
} _Expression_default_instance_;
class ResultDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Result> _instance;
} _Result_default_instance_;
}  // namespace solver
static void InitDefaultsExpression_services_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::solver::_Expression_default_instance_;
    new (ptr) ::solver::Expression();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::solver::Expression::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Expression_services_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsExpression_services_2eproto}, {}};

static void InitDefaultsResult_services_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::solver::_Result_default_instance_;
    new (ptr) ::solver::Result();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::solver::Result::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Result_services_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsResult_services_2eproto}, {}};

void InitDefaults_services_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Expression_services_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Result_services_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_services_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_services_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_services_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_services_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::solver::Expression, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::solver::Expression, infix_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::solver::Result, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::solver::Result, result_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::solver::Expression)},
  { 6, -1, sizeof(::solver::Result)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::solver::_Expression_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::solver::_Result_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_services_2eproto = {
  {}, AddDescriptors_services_2eproto, "services.proto", schemas,
  file_default_instances, TableStruct_services_2eproto::offsets,
  file_level_metadata_services_2eproto, 2, file_level_enum_descriptors_services_2eproto, file_level_service_descriptors_services_2eproto,
};

const char descriptor_table_protodef_services_2eproto[] =
  "\n\016services.proto\022\006solver\"\033\n\nExpression\022\r"
  "\n\005infix\030\001 \001(\t\"\030\n\006Result\022\016\n\006result\030\001 \001(\t2"
  "=\n\tCalculate\0220\n\010Evaluate\022\022.solver.Expres"
  "sion\032\016.solver.Result\"\000b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_services_2eproto = {
  false, InitDefaults_services_2eproto, 
  descriptor_table_protodef_services_2eproto,
  "services.proto", &assign_descriptors_table_services_2eproto, 150,
};

void AddDescriptors_services_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_services_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_services_2eproto = []() { AddDescriptors_services_2eproto(); return true; }();
namespace solver {

// ===================================================================

void Expression::InitAsDefaultInstance() {
}
class Expression::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Expression::kInfixFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Expression::Expression()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:solver.Expression)
}
Expression::Expression(const Expression& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  infix_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.infix().size() > 0) {
    infix_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.infix_);
  }
  // @@protoc_insertion_point(copy_constructor:solver.Expression)
}

void Expression::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Expression_services_2eproto.base);
  infix_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Expression::~Expression() {
  // @@protoc_insertion_point(destructor:solver.Expression)
  SharedDtor();
}

void Expression::SharedDtor() {
  infix_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Expression::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Expression& Expression::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Expression_services_2eproto.base);
  return *internal_default_instance();
}


void Expression::Clear() {
// @@protoc_insertion_point(message_clear_start:solver.Expression)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  infix_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Expression::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Expression*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string infix = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("solver.Expression.infix");
        object = msg->mutable_infix();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Expression::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:solver.Expression)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string infix = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_infix()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->infix().data(), static_cast<int>(this->infix().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "solver.Expression.infix"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:solver.Expression)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:solver.Expression)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Expression::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:solver.Expression)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string infix = 1;
  if (this->infix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->infix().data(), static_cast<int>(this->infix().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "solver.Expression.infix");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->infix(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:solver.Expression)
}

::google::protobuf::uint8* Expression::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:solver.Expression)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string infix = 1;
  if (this->infix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->infix().data(), static_cast<int>(this->infix().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "solver.Expression.infix");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->infix(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:solver.Expression)
  return target;
}

size_t Expression::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:solver.Expression)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string infix = 1;
  if (this->infix().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->infix());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Expression::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:solver.Expression)
  GOOGLE_DCHECK_NE(&from, this);
  const Expression* source =
      ::google::protobuf::DynamicCastToGenerated<Expression>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:solver.Expression)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:solver.Expression)
    MergeFrom(*source);
  }
}

void Expression::MergeFrom(const Expression& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:solver.Expression)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.infix().size() > 0) {

    infix_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.infix_);
  }
}

void Expression::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:solver.Expression)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Expression::CopyFrom(const Expression& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:solver.Expression)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Expression::IsInitialized() const {
  return true;
}

void Expression::Swap(Expression* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Expression::InternalSwap(Expression* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  infix_.Swap(&other->infix_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata Expression::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_services_2eproto);
  return ::file_level_metadata_services_2eproto[kIndexInFileMessages];
}


// ===================================================================

void Result::InitAsDefaultInstance() {
}
class Result::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Result::kResultFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Result::Result()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:solver.Result)
}
Result::Result(const Result& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  result_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.result().size() > 0) {
    result_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.result_);
  }
  // @@protoc_insertion_point(copy_constructor:solver.Result)
}

void Result::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Result_services_2eproto.base);
  result_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Result::~Result() {
  // @@protoc_insertion_point(destructor:solver.Result)
  SharedDtor();
}

void Result::SharedDtor() {
  result_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Result::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Result& Result::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Result_services_2eproto.base);
  return *internal_default_instance();
}


void Result::Clear() {
// @@protoc_insertion_point(message_clear_start:solver.Result)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  result_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Result::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Result*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string result = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("solver.Result.result");
        object = msg->mutable_result();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Result::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:solver.Result)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string result = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_result()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->result().data(), static_cast<int>(this->result().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "solver.Result.result"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:solver.Result)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:solver.Result)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Result::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:solver.Result)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string result = 1;
  if (this->result().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->result().data(), static_cast<int>(this->result().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "solver.Result.result");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->result(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:solver.Result)
}

::google::protobuf::uint8* Result::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:solver.Result)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string result = 1;
  if (this->result().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->result().data(), static_cast<int>(this->result().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "solver.Result.result");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->result(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:solver.Result)
  return target;
}

size_t Result::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:solver.Result)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string result = 1;
  if (this->result().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->result());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Result::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:solver.Result)
  GOOGLE_DCHECK_NE(&from, this);
  const Result* source =
      ::google::protobuf::DynamicCastToGenerated<Result>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:solver.Result)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:solver.Result)
    MergeFrom(*source);
  }
}

void Result::MergeFrom(const Result& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:solver.Result)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.result().size() > 0) {

    result_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.result_);
  }
}

void Result::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:solver.Result)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Result::CopyFrom(const Result& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:solver.Result)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Result::IsInitialized() const {
  return true;
}

void Result::Swap(Result* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Result::InternalSwap(Result* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  result_.Swap(&other->result_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata Result::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_services_2eproto);
  return ::file_level_metadata_services_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace solver
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::solver::Expression* Arena::CreateMaybeMessage< ::solver::Expression >(Arena* arena) {
  return Arena::CreateInternal< ::solver::Expression >(arena);
}
template<> PROTOBUF_NOINLINE ::solver::Result* Arena::CreateMaybeMessage< ::solver::Result >(Arena* arena) {
  return Arena::CreateInternal< ::solver::Result >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

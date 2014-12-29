// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client/configuration.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "client/configuration.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace dist_clang {
namespace client {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* Configuration_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Configuration_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_client_2fconfiguration_2eproto() {
  protobuf_AddDesc_client_2fconfiguration_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "client/configuration.proto");
  GOOGLE_CHECK(file != NULL);
  Configuration_descriptor_ = file->message_type(0);
  static const int Configuration_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Configuration, path_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Configuration, version_),
  };
  Configuration_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Configuration_descriptor_,
      Configuration::default_instance_,
      Configuration_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Configuration, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Configuration, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Configuration));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_client_2fconfiguration_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Configuration_descriptor_, &Configuration::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_client_2fconfiguration_2eproto() {
  delete Configuration::default_instance_;
  delete Configuration_reflection_;
}

void protobuf_AddDesc_client_2fconfiguration_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032client/configuration.proto\022\027dist_clang"
    ".client.proto\".\n\rConfiguration\022\014\n\004path\030\001"
    " \002(\t\022\017\n\007version\030\002 \001(\t", 101);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "client/configuration.proto", &protobuf_RegisterTypes);
  Configuration::default_instance_ = new Configuration();
  Configuration::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_client_2fconfiguration_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_client_2fconfiguration_2eproto {
  StaticDescriptorInitializer_client_2fconfiguration_2eproto() {
    protobuf_AddDesc_client_2fconfiguration_2eproto();
  }
} static_descriptor_initializer_client_2fconfiguration_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Configuration::kPathFieldNumber;
const int Configuration::kVersionFieldNumber;
#endif  // !_MSC_VER

Configuration::Configuration()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:dist_clang.client.proto.Configuration)
}

void Configuration::InitAsDefaultInstance() {
}

Configuration::Configuration(const Configuration& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:dist_clang.client.proto.Configuration)
}

void Configuration::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  path_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Configuration::~Configuration() {
  // @@protoc_insertion_point(destructor:dist_clang.client.proto.Configuration)
  SharedDtor();
}

void Configuration::SharedDtor() {
  if (path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete path_;
  }
  if (version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete version_;
  }
  if (this != default_instance_) {
  }
}

void Configuration::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Configuration::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Configuration_descriptor_;
}

const Configuration& Configuration::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_client_2fconfiguration_2eproto();
  return *default_instance_;
}

Configuration* Configuration::default_instance_ = NULL;

Configuration* Configuration::New() const {
  return new Configuration;
}

void Configuration::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_path()) {
      if (path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        path_->clear();
      }
    }
    if (has_version()) {
      if (version_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        version_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Configuration::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dist_clang.client.proto.Configuration)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string path = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_path()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->path().data(), this->path().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "path");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_version;
        break;
      }

      // optional string version = 2;
      case 2: {
        if (tag == 18) {
         parse_version:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_version()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->version().data(), this->version().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "version");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:dist_clang.client.proto.Configuration)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dist_clang.client.proto.Configuration)
  return false;
#undef DO_
}

void Configuration::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dist_clang.client.proto.Configuration)
  // required string path = 1;
  if (has_path()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->path().data(), this->path().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->path(), output);
  }

  // optional string version = 2;
  if (has_version()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->version().data(), this->version().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->version(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:dist_clang.client.proto.Configuration)
}

::google::protobuf::uint8* Configuration::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:dist_clang.client.proto.Configuration)
  // required string path = 1;
  if (has_path()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->path().data(), this->path().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "path");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->path(), target);
  }

  // optional string version = 2;
  if (has_version()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->version().data(), this->version().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->version(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dist_clang.client.proto.Configuration)
  return target;
}

int Configuration::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string path = 1;
    if (has_path()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->path());
    }

    // optional string version = 2;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->version());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Configuration::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Configuration* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Configuration*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Configuration::MergeFrom(const Configuration& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_path()) {
      set_path(from.path());
    }
    if (from.has_version()) {
      set_version(from.version());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Configuration::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Configuration::CopyFrom(const Configuration& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Configuration::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Configuration::Swap(Configuration* other) {
  if (other != this) {
    std::swap(path_, other->path_);
    std::swap(version_, other->version_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Configuration::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Configuration_descriptor_;
  metadata.reflection = Configuration_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace client
}  // namespace dist_clang

// @@protoc_insertion_point(global_scope)

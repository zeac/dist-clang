// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: remote.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "remote.pb.h"

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

namespace clangd {

namespace {

const ::google::protobuf::Descriptor* LocalExecution_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LocalExecution_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_remote_2eproto() {
  protobuf_AddDesc_remote_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "remote.proto");
  GOOGLE_CHECK(file != NULL);
  LocalExecution_descriptor_ = file->message_type(0);
  static const int LocalExecution_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalExecution, current_dir_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalExecution, args_),
  };
  LocalExecution_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LocalExecution_descriptor_,
      LocalExecution::default_instance_,
      LocalExecution_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalExecution, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalExecution, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LocalExecution));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_remote_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LocalExecution_descriptor_, &LocalExecution::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_remote_2eproto() {
  delete LocalExecution::default_instance_;
  delete LocalExecution_reflection_;
}

void protobuf_AddDesc_remote_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014remote.proto\022\006clangd\"3\n\016LocalExecution"
    "\022\023\n\013current_dir\030\001 \001(\t\022\014\n\004args\030\002 \003(\t", 75);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "remote.proto", &protobuf_RegisterTypes);
  LocalExecution::default_instance_ = new LocalExecution();
  LocalExecution::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_remote_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_remote_2eproto {
  StaticDescriptorInitializer_remote_2eproto() {
    protobuf_AddDesc_remote_2eproto();
  }
} static_descriptor_initializer_remote_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int LocalExecution::kCurrentDirFieldNumber;
const int LocalExecution::kArgsFieldNumber;
#endif  // !_MSC_VER

LocalExecution::LocalExecution()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LocalExecution::InitAsDefaultInstance() {
}

LocalExecution::LocalExecution(const LocalExecution& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LocalExecution::SharedCtor() {
  _cached_size_ = 0;
  current_dir_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LocalExecution::~LocalExecution() {
  SharedDtor();
}

void LocalExecution::SharedDtor() {
  if (current_dir_ != &::google::protobuf::internal::kEmptyString) {
    delete current_dir_;
  }
  if (this != default_instance_) {
  }
}

void LocalExecution::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LocalExecution::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LocalExecution_descriptor_;
}

const LocalExecution& LocalExecution::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_remote_2eproto();
  return *default_instance_;
}

LocalExecution* LocalExecution::default_instance_ = NULL;

LocalExecution* LocalExecution::New() const {
  return new LocalExecution;
}

void LocalExecution::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_current_dir()) {
      if (current_dir_ != &::google::protobuf::internal::kEmptyString) {
        current_dir_->clear();
      }
    }
  }
  args_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LocalExecution::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string current_dir = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_current_dir()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->current_dir().data(), this->current_dir().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_args;
        break;
      }

      // repeated string args = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_args:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_args()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->args(this->args_size() - 1).data(),
            this->args(this->args_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_args;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void LocalExecution::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string current_dir = 1;
  if (has_current_dir()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->current_dir().data(), this->current_dir().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->current_dir(), output);
  }

  // repeated string args = 2;
  for (int i = 0; i < this->args_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->args(i).data(), this->args(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->args(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LocalExecution::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string current_dir = 1;
  if (has_current_dir()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->current_dir().data(), this->current_dir().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->current_dir(), target);
  }

  // repeated string args = 2;
  for (int i = 0; i < this->args_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->args(i).data(), this->args(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->args(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LocalExecution::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string current_dir = 1;
    if (has_current_dir()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->current_dir());
    }

  }
  // repeated string args = 2;
  total_size += 1 * this->args_size();
  for (int i = 0; i < this->args_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->args(i));
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

void LocalExecution::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LocalExecution* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LocalExecution*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LocalExecution::MergeFrom(const LocalExecution& from) {
  GOOGLE_CHECK_NE(&from, this);
  args_.MergeFrom(from.args_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_current_dir()) {
      set_current_dir(from.current_dir());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LocalExecution::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LocalExecution::CopyFrom(const LocalExecution& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LocalExecution::IsInitialized() const {

  return true;
}

void LocalExecution::Swap(LocalExecution* other) {
  if (other != this) {
    std::swap(current_dir_, other->current_dir_);
    args_.Swap(&other->args_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LocalExecution::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LocalExecution_descriptor_;
  metadata.reflection = LocalExecution_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace clangd

// @@protoc_insertion_point(global_scope)
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base.proto

#ifndef PROTOBUF_base_2eproto__INCLUDED
#define PROTOBUF_base_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace dist_clang {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_base_2eproto();
void protobuf_AssignDesc_base_2eproto();
void protobuf_ShutdownFile_base_2eproto();

class Compiler;

// ===================================================================

class Compiler : public ::google::protobuf::Message {
 public:
  Compiler();
  virtual ~Compiler();

  Compiler(const Compiler& from);

  inline Compiler& operator=(const Compiler& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Compiler& default_instance();

  void Swap(Compiler* other);

  // implements Message ----------------------------------------------

  Compiler* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Compiler& from);
  void MergeFrom(const Compiler& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string path = 1;
  inline bool has_path() const;
  inline void clear_path();
  static const int kPathFieldNumber = 1;
  inline const ::std::string& path() const;
  inline void set_path(const ::std::string& value);
  inline void set_path(const char* value);
  inline void set_path(const char* value, size_t size);
  inline ::std::string* mutable_path();
  inline ::std::string* release_path();
  inline void set_allocated_path(::std::string* path);

  // optional string version = 2;
  inline bool has_version() const;
  inline void clear_version();
  static const int kVersionFieldNumber = 2;
  inline const ::std::string& version() const;
  inline void set_version(const ::std::string& value);
  inline void set_version(const char* value);
  inline void set_version(const char* value, size_t size);
  inline ::std::string* mutable_version();
  inline ::std::string* release_version();
  inline void set_allocated_version(::std::string* version);

  // @@protoc_insertion_point(class_scope:dist_clang.proto.Compiler)
 private:
  inline void set_has_path();
  inline void clear_has_path();
  inline void set_has_version();
  inline void clear_has_version();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* path_;
  ::std::string* version_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_base_2eproto();
  friend void protobuf_AssignDesc_base_2eproto();
  friend void protobuf_ShutdownFile_base_2eproto();

  void InitAsDefaultInstance();
  static Compiler* default_instance_;
};
// ===================================================================


// ===================================================================

// Compiler

// required string path = 1;
inline bool Compiler::has_path() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Compiler::set_has_path() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Compiler::clear_has_path() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Compiler::clear_path() {
  if (path_ != &::google::protobuf::internal::kEmptyString) {
    path_->clear();
  }
  clear_has_path();
}
inline const ::std::string& Compiler::path() const {
  return *path_;
}
inline void Compiler::set_path(const ::std::string& value) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    path_ = new ::std::string;
  }
  path_->assign(value);
}
inline void Compiler::set_path(const char* value) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    path_ = new ::std::string;
  }
  path_->assign(value);
}
inline void Compiler::set_path(const char* value, size_t size) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    path_ = new ::std::string;
  }
  path_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Compiler::mutable_path() {
  set_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    path_ = new ::std::string;
  }
  return path_;
}
inline ::std::string* Compiler::release_path() {
  clear_has_path();
  if (path_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = path_;
    path_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Compiler::set_allocated_path(::std::string* path) {
  if (path_ != &::google::protobuf::internal::kEmptyString) {
    delete path_;
  }
  if (path) {
    set_has_path();
    path_ = path;
  } else {
    clear_has_path();
    path_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string version = 2;
inline bool Compiler::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Compiler::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Compiler::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Compiler::clear_version() {
  if (version_ != &::google::protobuf::internal::kEmptyString) {
    version_->clear();
  }
  clear_has_version();
}
inline const ::std::string& Compiler::version() const {
  return *version_;
}
inline void Compiler::set_version(const ::std::string& value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    version_ = new ::std::string;
  }
  version_->assign(value);
}
inline void Compiler::set_version(const char* value) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    version_ = new ::std::string;
  }
  version_->assign(value);
}
inline void Compiler::set_version(const char* value, size_t size) {
  set_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    version_ = new ::std::string;
  }
  version_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Compiler::mutable_version() {
  set_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    version_ = new ::std::string;
  }
  return version_;
}
inline ::std::string* Compiler::release_version() {
  clear_has_version();
  if (version_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = version_;
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Compiler::set_allocated_version(::std::string* version) {
  if (version_ != &::google::protobuf::internal::kEmptyString) {
    delete version_;
  }
  if (version) {
    set_has_version();
    version_ = version;
  } else {
    clear_has_version();
    version_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace dist_clang

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_base_2eproto__INCLUDED
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mysqlx_session.proto

#ifndef PROTOBUF_mysqlx_5fsession_2eproto__INCLUDED
#define PROTOBUF_mysqlx_5fsession_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace Mysqlx {
namespace Session {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_mysqlx_5fsession_2eproto();
void protobuf_AssignDesc_mysqlx_5fsession_2eproto();
void protobuf_ShutdownFile_mysqlx_5fsession_2eproto();

class AuthenticateStart;
class AuthenticateContinue;
class AuthenticateOk;
class Reset;
class Close;

// ===================================================================

class AuthenticateStart : public ::google::protobuf::MessageLite {
 public:
  AuthenticateStart();
  virtual ~AuthenticateStart();

  AuthenticateStart(const AuthenticateStart& from);

  inline AuthenticateStart& operator=(const AuthenticateStart& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const AuthenticateStart& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const AuthenticateStart* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(AuthenticateStart* other);

  // implements Message ----------------------------------------------

  AuthenticateStart* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const AuthenticateStart& from);
  void MergeFrom(const AuthenticateStart& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string mech_name = 1;
  inline bool has_mech_name() const;
  inline void clear_mech_name();
  static const int kMechNameFieldNumber = 1;
  inline const ::std::string& mech_name() const;
  inline void set_mech_name(const ::std::string& value);
  inline void set_mech_name(const char* value);
  inline void set_mech_name(const char* value, size_t size);
  inline ::std::string* mutable_mech_name();
  inline ::std::string* release_mech_name();
  inline void set_allocated_mech_name(::std::string* mech_name);

  // optional bytes auth_data = 2;
  inline bool has_auth_data() const;
  inline void clear_auth_data();
  static const int kAuthDataFieldNumber = 2;
  inline const ::std::string& auth_data() const;
  inline void set_auth_data(const ::std::string& value);
  inline void set_auth_data(const char* value);
  inline void set_auth_data(const void* value, size_t size);
  inline ::std::string* mutable_auth_data();
  inline ::std::string* release_auth_data();
  inline void set_allocated_auth_data(::std::string* auth_data);

  // optional bytes initial_response = 3;
  inline bool has_initial_response() const;
  inline void clear_initial_response();
  static const int kInitialResponseFieldNumber = 3;
  inline const ::std::string& initial_response() const;
  inline void set_initial_response(const ::std::string& value);
  inline void set_initial_response(const char* value);
  inline void set_initial_response(const void* value, size_t size);
  inline ::std::string* mutable_initial_response();
  inline ::std::string* release_initial_response();
  inline void set_allocated_initial_response(::std::string* initial_response);

  // @@protoc_insertion_point(class_scope:Mysqlx.Session.AuthenticateStart)
 private:
  inline void set_has_mech_name();
  inline void clear_has_mech_name();
  inline void set_has_auth_data();
  inline void clear_has_auth_data();
  inline void set_has_initial_response();
  inline void clear_has_initial_response();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* mech_name_;
  ::std::string* auth_data_;
  ::std::string* initial_response_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_mysqlx_5fsession_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_mysqlx_5fsession_2eproto();
  #endif
  friend void protobuf_AssignDesc_mysqlx_5fsession_2eproto();
  friend void protobuf_ShutdownFile_mysqlx_5fsession_2eproto();

  void InitAsDefaultInstance();
  static AuthenticateStart* default_instance_;
};
// -------------------------------------------------------------------

class AuthenticateContinue : public ::google::protobuf::MessageLite {
 public:
  AuthenticateContinue();
  virtual ~AuthenticateContinue();

  AuthenticateContinue(const AuthenticateContinue& from);

  inline AuthenticateContinue& operator=(const AuthenticateContinue& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const AuthenticateContinue& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const AuthenticateContinue* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(AuthenticateContinue* other);

  // implements Message ----------------------------------------------

  AuthenticateContinue* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const AuthenticateContinue& from);
  void MergeFrom(const AuthenticateContinue& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bytes auth_data = 1;
  inline bool has_auth_data() const;
  inline void clear_auth_data();
  static const int kAuthDataFieldNumber = 1;
  inline const ::std::string& auth_data() const;
  inline void set_auth_data(const ::std::string& value);
  inline void set_auth_data(const char* value);
  inline void set_auth_data(const void* value, size_t size);
  inline ::std::string* mutable_auth_data();
  inline ::std::string* release_auth_data();
  inline void set_allocated_auth_data(::std::string* auth_data);

  // @@protoc_insertion_point(class_scope:Mysqlx.Session.AuthenticateContinue)
 private:
  inline void set_has_auth_data();
  inline void clear_has_auth_data();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* auth_data_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_mysqlx_5fsession_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_mysqlx_5fsession_2eproto();
  #endif
  friend void protobuf_AssignDesc_mysqlx_5fsession_2eproto();
  friend void protobuf_ShutdownFile_mysqlx_5fsession_2eproto();

  void InitAsDefaultInstance();
  static AuthenticateContinue* default_instance_;
};
// -------------------------------------------------------------------

class AuthenticateOk : public ::google::protobuf::MessageLite {
 public:
  AuthenticateOk();
  virtual ~AuthenticateOk();

  AuthenticateOk(const AuthenticateOk& from);

  inline AuthenticateOk& operator=(const AuthenticateOk& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const AuthenticateOk& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const AuthenticateOk* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(AuthenticateOk* other);

  // implements Message ----------------------------------------------

  AuthenticateOk* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const AuthenticateOk& from);
  void MergeFrom(const AuthenticateOk& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes auth_data = 1;
  inline bool has_auth_data() const;
  inline void clear_auth_data();
  static const int kAuthDataFieldNumber = 1;
  inline const ::std::string& auth_data() const;
  inline void set_auth_data(const ::std::string& value);
  inline void set_auth_data(const char* value);
  inline void set_auth_data(const void* value, size_t size);
  inline ::std::string* mutable_auth_data();
  inline ::std::string* release_auth_data();
  inline void set_allocated_auth_data(::std::string* auth_data);

  // @@protoc_insertion_point(class_scope:Mysqlx.Session.AuthenticateOk)
 private:
  inline void set_has_auth_data();
  inline void clear_has_auth_data();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* auth_data_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_mysqlx_5fsession_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_mysqlx_5fsession_2eproto();
  #endif
  friend void protobuf_AssignDesc_mysqlx_5fsession_2eproto();
  friend void protobuf_ShutdownFile_mysqlx_5fsession_2eproto();

  void InitAsDefaultInstance();
  static AuthenticateOk* default_instance_;
};
// -------------------------------------------------------------------

class Reset : public ::google::protobuf::MessageLite {
 public:
  Reset();
  virtual ~Reset();

  Reset(const Reset& from);

  inline Reset& operator=(const Reset& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const Reset& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Reset* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(Reset* other);

  // implements Message ----------------------------------------------

  Reset* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Reset& from);
  void MergeFrom(const Reset& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:Mysqlx.Session.Reset)
 private:

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_mysqlx_5fsession_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_mysqlx_5fsession_2eproto();
  #endif
  friend void protobuf_AssignDesc_mysqlx_5fsession_2eproto();
  friend void protobuf_ShutdownFile_mysqlx_5fsession_2eproto();

  void InitAsDefaultInstance();
  static Reset* default_instance_;
};
// -------------------------------------------------------------------

class Close : public ::google::protobuf::MessageLite {
 public:
  Close();
  virtual ~Close();

  Close(const Close& from);

  inline Close& operator=(const Close& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const Close& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Close* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(Close* other);

  // implements Message ----------------------------------------------

  Close* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Close& from);
  void MergeFrom(const Close& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:Mysqlx.Session.Close)
 private:

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_mysqlx_5fsession_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_mysqlx_5fsession_2eproto();
  #endif
  friend void protobuf_AssignDesc_mysqlx_5fsession_2eproto();
  friend void protobuf_ShutdownFile_mysqlx_5fsession_2eproto();

  void InitAsDefaultInstance();
  static Close* default_instance_;
};
// ===================================================================


// ===================================================================

// AuthenticateStart

// required string mech_name = 1;
inline bool AuthenticateStart::has_mech_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AuthenticateStart::set_has_mech_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AuthenticateStart::clear_has_mech_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AuthenticateStart::clear_mech_name() {
  if (mech_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mech_name_->clear();
  }
  clear_has_mech_name();
}
inline const ::std::string& AuthenticateStart::mech_name() const {
  // @@protoc_insertion_point(field_get:Mysqlx.Session.AuthenticateStart.mech_name)
  return *mech_name_;
}
inline void AuthenticateStart::set_mech_name(const ::std::string& value) {
  set_has_mech_name();
  if (mech_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mech_name_ = new ::std::string;
  }
  mech_name_->assign(value);
  // @@protoc_insertion_point(field_set:Mysqlx.Session.AuthenticateStart.mech_name)
}
inline void AuthenticateStart::set_mech_name(const char* value) {
  set_has_mech_name();
  if (mech_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mech_name_ = new ::std::string;
  }
  mech_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:Mysqlx.Session.AuthenticateStart.mech_name)
}
inline void AuthenticateStart::set_mech_name(const char* value, size_t size) {
  set_has_mech_name();
  if (mech_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mech_name_ = new ::std::string;
  }
  mech_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Mysqlx.Session.AuthenticateStart.mech_name)
}
inline ::std::string* AuthenticateStart::mutable_mech_name() {
  set_has_mech_name();
  if (mech_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    mech_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Mysqlx.Session.AuthenticateStart.mech_name)
  return mech_name_;
}
inline ::std::string* AuthenticateStart::release_mech_name() {
  clear_has_mech_name();
  if (mech_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = mech_name_;
    mech_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AuthenticateStart::set_allocated_mech_name(::std::string* mech_name) {
  if (mech_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete mech_name_;
  }
  if (mech_name) {
    set_has_mech_name();
    mech_name_ = mech_name;
  } else {
    clear_has_mech_name();
    mech_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Mysqlx.Session.AuthenticateStart.mech_name)
}

// optional bytes auth_data = 2;
inline bool AuthenticateStart::has_auth_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AuthenticateStart::set_has_auth_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AuthenticateStart::clear_has_auth_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AuthenticateStart::clear_auth_data() {
  if (auth_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_->clear();
  }
  clear_has_auth_data();
}
inline const ::std::string& AuthenticateStart::auth_data() const {
  // @@protoc_insertion_point(field_get:Mysqlx.Session.AuthenticateStart.auth_data)
  return *auth_data_;
}
inline void AuthenticateStart::set_auth_data(const ::std::string& value) {
  set_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_ = new ::std::string;
  }
  auth_data_->assign(value);
  // @@protoc_insertion_point(field_set:Mysqlx.Session.AuthenticateStart.auth_data)
}
inline void AuthenticateStart::set_auth_data(const char* value) {
  set_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_ = new ::std::string;
  }
  auth_data_->assign(value);
  // @@protoc_insertion_point(field_set_char:Mysqlx.Session.AuthenticateStart.auth_data)
}
inline void AuthenticateStart::set_auth_data(const void* value, size_t size) {
  set_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_ = new ::std::string;
  }
  auth_data_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Mysqlx.Session.AuthenticateStart.auth_data)
}
inline ::std::string* AuthenticateStart::mutable_auth_data() {
  set_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Mysqlx.Session.AuthenticateStart.auth_data)
  return auth_data_;
}
inline ::std::string* AuthenticateStart::release_auth_data() {
  clear_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = auth_data_;
    auth_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AuthenticateStart::set_allocated_auth_data(::std::string* auth_data) {
  if (auth_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete auth_data_;
  }
  if (auth_data) {
    set_has_auth_data();
    auth_data_ = auth_data;
  } else {
    clear_has_auth_data();
    auth_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Mysqlx.Session.AuthenticateStart.auth_data)
}

// optional bytes initial_response = 3;
inline bool AuthenticateStart::has_initial_response() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AuthenticateStart::set_has_initial_response() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AuthenticateStart::clear_has_initial_response() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AuthenticateStart::clear_initial_response() {
  if (initial_response_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    initial_response_->clear();
  }
  clear_has_initial_response();
}
inline const ::std::string& AuthenticateStart::initial_response() const {
  // @@protoc_insertion_point(field_get:Mysqlx.Session.AuthenticateStart.initial_response)
  return *initial_response_;
}
inline void AuthenticateStart::set_initial_response(const ::std::string& value) {
  set_has_initial_response();
  if (initial_response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    initial_response_ = new ::std::string;
  }
  initial_response_->assign(value);
  // @@protoc_insertion_point(field_set:Mysqlx.Session.AuthenticateStart.initial_response)
}
inline void AuthenticateStart::set_initial_response(const char* value) {
  set_has_initial_response();
  if (initial_response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    initial_response_ = new ::std::string;
  }
  initial_response_->assign(value);
  // @@protoc_insertion_point(field_set_char:Mysqlx.Session.AuthenticateStart.initial_response)
}
inline void AuthenticateStart::set_initial_response(const void* value, size_t size) {
  set_has_initial_response();
  if (initial_response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    initial_response_ = new ::std::string;
  }
  initial_response_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Mysqlx.Session.AuthenticateStart.initial_response)
}
inline ::std::string* AuthenticateStart::mutable_initial_response() {
  set_has_initial_response();
  if (initial_response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    initial_response_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Mysqlx.Session.AuthenticateStart.initial_response)
  return initial_response_;
}
inline ::std::string* AuthenticateStart::release_initial_response() {
  clear_has_initial_response();
  if (initial_response_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = initial_response_;
    initial_response_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AuthenticateStart::set_allocated_initial_response(::std::string* initial_response) {
  if (initial_response_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete initial_response_;
  }
  if (initial_response) {
    set_has_initial_response();
    initial_response_ = initial_response;
  } else {
    clear_has_initial_response();
    initial_response_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Mysqlx.Session.AuthenticateStart.initial_response)
}

// -------------------------------------------------------------------

// AuthenticateContinue

// required bytes auth_data = 1;
inline bool AuthenticateContinue::has_auth_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AuthenticateContinue::set_has_auth_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AuthenticateContinue::clear_has_auth_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AuthenticateContinue::clear_auth_data() {
  if (auth_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_->clear();
  }
  clear_has_auth_data();
}
inline const ::std::string& AuthenticateContinue::auth_data() const {
  // @@protoc_insertion_point(field_get:Mysqlx.Session.AuthenticateContinue.auth_data)
  return *auth_data_;
}
inline void AuthenticateContinue::set_auth_data(const ::std::string& value) {
  set_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_ = new ::std::string;
  }
  auth_data_->assign(value);
  // @@protoc_insertion_point(field_set:Mysqlx.Session.AuthenticateContinue.auth_data)
}
inline void AuthenticateContinue::set_auth_data(const char* value) {
  set_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_ = new ::std::string;
  }
  auth_data_->assign(value);
  // @@protoc_insertion_point(field_set_char:Mysqlx.Session.AuthenticateContinue.auth_data)
}
inline void AuthenticateContinue::set_auth_data(const void* value, size_t size) {
  set_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_ = new ::std::string;
  }
  auth_data_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Mysqlx.Session.AuthenticateContinue.auth_data)
}
inline ::std::string* AuthenticateContinue::mutable_auth_data() {
  set_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Mysqlx.Session.AuthenticateContinue.auth_data)
  return auth_data_;
}
inline ::std::string* AuthenticateContinue::release_auth_data() {
  clear_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = auth_data_;
    auth_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AuthenticateContinue::set_allocated_auth_data(::std::string* auth_data) {
  if (auth_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete auth_data_;
  }
  if (auth_data) {
    set_has_auth_data();
    auth_data_ = auth_data;
  } else {
    clear_has_auth_data();
    auth_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Mysqlx.Session.AuthenticateContinue.auth_data)
}

// -------------------------------------------------------------------

// AuthenticateOk

// optional bytes auth_data = 1;
inline bool AuthenticateOk::has_auth_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AuthenticateOk::set_has_auth_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AuthenticateOk::clear_has_auth_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AuthenticateOk::clear_auth_data() {
  if (auth_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_->clear();
  }
  clear_has_auth_data();
}
inline const ::std::string& AuthenticateOk::auth_data() const {
  // @@protoc_insertion_point(field_get:Mysqlx.Session.AuthenticateOk.auth_data)
  return *auth_data_;
}
inline void AuthenticateOk::set_auth_data(const ::std::string& value) {
  set_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_ = new ::std::string;
  }
  auth_data_->assign(value);
  // @@protoc_insertion_point(field_set:Mysqlx.Session.AuthenticateOk.auth_data)
}
inline void AuthenticateOk::set_auth_data(const char* value) {
  set_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_ = new ::std::string;
  }
  auth_data_->assign(value);
  // @@protoc_insertion_point(field_set_char:Mysqlx.Session.AuthenticateOk.auth_data)
}
inline void AuthenticateOk::set_auth_data(const void* value, size_t size) {
  set_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_ = new ::std::string;
  }
  auth_data_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Mysqlx.Session.AuthenticateOk.auth_data)
}
inline ::std::string* AuthenticateOk::mutable_auth_data() {
  set_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    auth_data_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Mysqlx.Session.AuthenticateOk.auth_data)
  return auth_data_;
}
inline ::std::string* AuthenticateOk::release_auth_data() {
  clear_has_auth_data();
  if (auth_data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = auth_data_;
    auth_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AuthenticateOk::set_allocated_auth_data(::std::string* auth_data) {
  if (auth_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete auth_data_;
  }
  if (auth_data) {
    set_has_auth_data();
    auth_data_ = auth_data;
  } else {
    clear_has_auth_data();
    auth_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Mysqlx.Session.AuthenticateOk.auth_data)
}

// -------------------------------------------------------------------

// Reset

// -------------------------------------------------------------------

// Close


// @@protoc_insertion_point(namespace_scope)

}  // namespace Session
}  // namespace Mysqlx

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mysqlx_5fsession_2eproto__INCLUDED

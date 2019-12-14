// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mysqlx_expect.proto

#ifndef PROTOBUF_mysqlx_5fexpect_2eproto__INCLUDED
#define PROTOBUF_mysqlx_5fexpect_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Mysqlx {
namespace Expect {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_mysqlx_5fexpect_2eproto();
void protobuf_AssignDesc_mysqlx_5fexpect_2eproto();
void protobuf_ShutdownFile_mysqlx_5fexpect_2eproto();

class Open;
class Open_Condition;
class Close;

enum Open_Condition_ConditionOperation {
  Open_Condition_ConditionOperation_EXPECT_OP_SET = 0,
  Open_Condition_ConditionOperation_EXPECT_OP_UNSET = 1
};
bool Open_Condition_ConditionOperation_IsValid(int value);
const Open_Condition_ConditionOperation Open_Condition_ConditionOperation_ConditionOperation_MIN = Open_Condition_ConditionOperation_EXPECT_OP_SET;
const Open_Condition_ConditionOperation Open_Condition_ConditionOperation_ConditionOperation_MAX = Open_Condition_ConditionOperation_EXPECT_OP_UNSET;
const int Open_Condition_ConditionOperation_ConditionOperation_ARRAYSIZE = Open_Condition_ConditionOperation_ConditionOperation_MAX + 1;

const ::google::protobuf::EnumDescriptor* Open_Condition_ConditionOperation_descriptor();
inline const ::std::string& Open_Condition_ConditionOperation_Name(Open_Condition_ConditionOperation value) {
  return ::google::protobuf::internal::NameOfEnum(
    Open_Condition_ConditionOperation_descriptor(), value);
}
inline bool Open_Condition_ConditionOperation_Parse(
    const ::std::string& name, Open_Condition_ConditionOperation* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Open_Condition_ConditionOperation>(
    Open_Condition_ConditionOperation_descriptor(), name, value);
}
enum Open_CtxOperation {
  Open_CtxOperation_EXPECT_CTX_COPY_PREV = 0,
  Open_CtxOperation_EXPECT_CTX_EMPTY = 1
};
bool Open_CtxOperation_IsValid(int value);
const Open_CtxOperation Open_CtxOperation_CtxOperation_MIN = Open_CtxOperation_EXPECT_CTX_COPY_PREV;
const Open_CtxOperation Open_CtxOperation_CtxOperation_MAX = Open_CtxOperation_EXPECT_CTX_EMPTY;
const int Open_CtxOperation_CtxOperation_ARRAYSIZE = Open_CtxOperation_CtxOperation_MAX + 1;

const ::google::protobuf::EnumDescriptor* Open_CtxOperation_descriptor();
inline const ::std::string& Open_CtxOperation_Name(Open_CtxOperation value) {
  return ::google::protobuf::internal::NameOfEnum(
    Open_CtxOperation_descriptor(), value);
}
inline bool Open_CtxOperation_Parse(
    const ::std::string& name, Open_CtxOperation* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Open_CtxOperation>(
    Open_CtxOperation_descriptor(), name, value);
}
// ===================================================================

class Open_Condition : public ::google::protobuf::Message {
 public:
  Open_Condition();
  virtual ~Open_Condition();

  Open_Condition(const Open_Condition& from);

  inline Open_Condition& operator=(const Open_Condition& from) {
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
  static const Open_Condition& default_instance();

  void Swap(Open_Condition* other);

  // implements Message ----------------------------------------------

  Open_Condition* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Open_Condition& from);
  void MergeFrom(const Open_Condition& from);
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

  typedef Open_Condition_ConditionOperation ConditionOperation;
  static const ConditionOperation EXPECT_OP_SET = Open_Condition_ConditionOperation_EXPECT_OP_SET;
  static const ConditionOperation EXPECT_OP_UNSET = Open_Condition_ConditionOperation_EXPECT_OP_UNSET;
  static inline bool ConditionOperation_IsValid(int value) {
    return Open_Condition_ConditionOperation_IsValid(value);
  }
  static const ConditionOperation ConditionOperation_MIN =
    Open_Condition_ConditionOperation_ConditionOperation_MIN;
  static const ConditionOperation ConditionOperation_MAX =
    Open_Condition_ConditionOperation_ConditionOperation_MAX;
  static const int ConditionOperation_ARRAYSIZE =
    Open_Condition_ConditionOperation_ConditionOperation_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ConditionOperation_descriptor() {
    return Open_Condition_ConditionOperation_descriptor();
  }
  static inline const ::std::string& ConditionOperation_Name(ConditionOperation value) {
    return Open_Condition_ConditionOperation_Name(value);
  }
  static inline bool ConditionOperation_Parse(const ::std::string& name,
      ConditionOperation* value) {
    return Open_Condition_ConditionOperation_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required uint32 condition_key = 1;
  inline bool has_condition_key() const;
  inline void clear_condition_key();
  static const int kConditionKeyFieldNumber = 1;
  inline ::google::protobuf::uint32 condition_key() const;
  inline void set_condition_key(::google::protobuf::uint32 value);

  // optional bytes condition_value = 2;
  inline bool has_condition_value() const;
  inline void clear_condition_value();
  static const int kConditionValueFieldNumber = 2;
  inline const ::std::string& condition_value() const;
  inline void set_condition_value(const ::std::string& value);
  inline void set_condition_value(const char* value);
  inline void set_condition_value(const void* value, size_t size);
  inline ::std::string* mutable_condition_value();
  inline ::std::string* release_condition_value();
  inline void set_allocated_condition_value(::std::string* condition_value);

  // optional .Mysqlx.Expect.Open.Condition.ConditionOperation op = 3 [default = EXPECT_OP_SET];
  inline bool has_op() const;
  inline void clear_op();
  static const int kOpFieldNumber = 3;
  inline ::Mysqlx::Expect::Open_Condition_ConditionOperation op() const;
  inline void set_op(::Mysqlx::Expect::Open_Condition_ConditionOperation value);

  // @@protoc_insertion_point(class_scope:Mysqlx.Expect.Open.Condition)
 private:
  inline void set_has_condition_key();
  inline void clear_has_condition_key();
  inline void set_has_condition_value();
  inline void clear_has_condition_value();
  inline void set_has_op();
  inline void clear_has_op();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* condition_value_;
  ::google::protobuf::uint32 condition_key_;
  int op_;
  friend void  protobuf_AddDesc_mysqlx_5fexpect_2eproto();
  friend void protobuf_AssignDesc_mysqlx_5fexpect_2eproto();
  friend void protobuf_ShutdownFile_mysqlx_5fexpect_2eproto();

  void InitAsDefaultInstance();
  static Open_Condition* default_instance_;
};
// -------------------------------------------------------------------

class Open : public ::google::protobuf::Message {
 public:
  Open();
  virtual ~Open();

  Open(const Open& from);

  inline Open& operator=(const Open& from) {
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
  static const Open& default_instance();

  void Swap(Open* other);

  // implements Message ----------------------------------------------

  Open* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Open& from);
  void MergeFrom(const Open& from);
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

  typedef Open_Condition Condition;

  typedef Open_CtxOperation CtxOperation;
  static const CtxOperation EXPECT_CTX_COPY_PREV = Open_CtxOperation_EXPECT_CTX_COPY_PREV;
  static const CtxOperation EXPECT_CTX_EMPTY = Open_CtxOperation_EXPECT_CTX_EMPTY;
  static inline bool CtxOperation_IsValid(int value) {
    return Open_CtxOperation_IsValid(value);
  }
  static const CtxOperation CtxOperation_MIN =
    Open_CtxOperation_CtxOperation_MIN;
  static const CtxOperation CtxOperation_MAX =
    Open_CtxOperation_CtxOperation_MAX;
  static const int CtxOperation_ARRAYSIZE =
    Open_CtxOperation_CtxOperation_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CtxOperation_descriptor() {
    return Open_CtxOperation_descriptor();
  }
  static inline const ::std::string& CtxOperation_Name(CtxOperation value) {
    return Open_CtxOperation_Name(value);
  }
  static inline bool CtxOperation_Parse(const ::std::string& name,
      CtxOperation* value) {
    return Open_CtxOperation_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .Mysqlx.Expect.Open.CtxOperation op = 1 [default = EXPECT_CTX_COPY_PREV];
  inline bool has_op() const;
  inline void clear_op();
  static const int kOpFieldNumber = 1;
  inline ::Mysqlx::Expect::Open_CtxOperation op() const;
  inline void set_op(::Mysqlx::Expect::Open_CtxOperation value);

  // repeated .Mysqlx.Expect.Open.Condition cond = 2;
  inline int cond_size() const;
  inline void clear_cond();
  static const int kCondFieldNumber = 2;
  inline const ::Mysqlx::Expect::Open_Condition& cond(int index) const;
  inline ::Mysqlx::Expect::Open_Condition* mutable_cond(int index);
  inline ::Mysqlx::Expect::Open_Condition* add_cond();
  inline const ::google::protobuf::RepeatedPtrField< ::Mysqlx::Expect::Open_Condition >&
      cond() const;
  inline ::google::protobuf::RepeatedPtrField< ::Mysqlx::Expect::Open_Condition >*
      mutable_cond();

  // @@protoc_insertion_point(class_scope:Mysqlx.Expect.Open)
 private:
  inline void set_has_op();
  inline void clear_has_op();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Mysqlx::Expect::Open_Condition > cond_;
  int op_;
  friend void  protobuf_AddDesc_mysqlx_5fexpect_2eproto();
  friend void protobuf_AssignDesc_mysqlx_5fexpect_2eproto();
  friend void protobuf_ShutdownFile_mysqlx_5fexpect_2eproto();

  void InitAsDefaultInstance();
  static Open* default_instance_;
};
// -------------------------------------------------------------------

class Close : public ::google::protobuf::Message {
 public:
  Close();
  virtual ~Close();

  Close(const Close& from);

  inline Close& operator=(const Close& from) {
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
  static const Close& default_instance();

  void Swap(Close* other);

  // implements Message ----------------------------------------------

  Close* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Close& from);
  void MergeFrom(const Close& from);
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

  // @@protoc_insertion_point(class_scope:Mysqlx.Expect.Close)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_mysqlx_5fexpect_2eproto();
  friend void protobuf_AssignDesc_mysqlx_5fexpect_2eproto();
  friend void protobuf_ShutdownFile_mysqlx_5fexpect_2eproto();

  void InitAsDefaultInstance();
  static Close* default_instance_;
};
// ===================================================================


// ===================================================================

// Open_Condition

// required uint32 condition_key = 1;
inline bool Open_Condition::has_condition_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Open_Condition::set_has_condition_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Open_Condition::clear_has_condition_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Open_Condition::clear_condition_key() {
  condition_key_ = 0u;
  clear_has_condition_key();
}
inline ::google::protobuf::uint32 Open_Condition::condition_key() const {
  // @@protoc_insertion_point(field_get:Mysqlx.Expect.Open.Condition.condition_key)
  return condition_key_;
}
inline void Open_Condition::set_condition_key(::google::protobuf::uint32 value) {
  set_has_condition_key();
  condition_key_ = value;
  // @@protoc_insertion_point(field_set:Mysqlx.Expect.Open.Condition.condition_key)
}

// optional bytes condition_value = 2;
inline bool Open_Condition::has_condition_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Open_Condition::set_has_condition_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Open_Condition::clear_has_condition_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Open_Condition::clear_condition_value() {
  if (condition_value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    condition_value_->clear();
  }
  clear_has_condition_value();
}
inline const ::std::string& Open_Condition::condition_value() const {
  // @@protoc_insertion_point(field_get:Mysqlx.Expect.Open.Condition.condition_value)
  return *condition_value_;
}
inline void Open_Condition::set_condition_value(const ::std::string& value) {
  set_has_condition_value();
  if (condition_value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    condition_value_ = new ::std::string;
  }
  condition_value_->assign(value);
  // @@protoc_insertion_point(field_set:Mysqlx.Expect.Open.Condition.condition_value)
}
inline void Open_Condition::set_condition_value(const char* value) {
  set_has_condition_value();
  if (condition_value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    condition_value_ = new ::std::string;
  }
  condition_value_->assign(value);
  // @@protoc_insertion_point(field_set_char:Mysqlx.Expect.Open.Condition.condition_value)
}
inline void Open_Condition::set_condition_value(const void* value, size_t size) {
  set_has_condition_value();
  if (condition_value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    condition_value_ = new ::std::string;
  }
  condition_value_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Mysqlx.Expect.Open.Condition.condition_value)
}
inline ::std::string* Open_Condition::mutable_condition_value() {
  set_has_condition_value();
  if (condition_value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    condition_value_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Mysqlx.Expect.Open.Condition.condition_value)
  return condition_value_;
}
inline ::std::string* Open_Condition::release_condition_value() {
  clear_has_condition_value();
  if (condition_value_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = condition_value_;
    condition_value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Open_Condition::set_allocated_condition_value(::std::string* condition_value) {
  if (condition_value_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete condition_value_;
  }
  if (condition_value) {
    set_has_condition_value();
    condition_value_ = condition_value;
  } else {
    clear_has_condition_value();
    condition_value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Mysqlx.Expect.Open.Condition.condition_value)
}

// optional .Mysqlx.Expect.Open.Condition.ConditionOperation op = 3 [default = EXPECT_OP_SET];
inline bool Open_Condition::has_op() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Open_Condition::set_has_op() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Open_Condition::clear_has_op() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Open_Condition::clear_op() {
  op_ = 0;
  clear_has_op();
}
inline ::Mysqlx::Expect::Open_Condition_ConditionOperation Open_Condition::op() const {
  // @@protoc_insertion_point(field_get:Mysqlx.Expect.Open.Condition.op)
  return static_cast< ::Mysqlx::Expect::Open_Condition_ConditionOperation >(op_);
}
inline void Open_Condition::set_op(::Mysqlx::Expect::Open_Condition_ConditionOperation value) {
  assert(::Mysqlx::Expect::Open_Condition_ConditionOperation_IsValid(value));
  set_has_op();
  op_ = value;
  // @@protoc_insertion_point(field_set:Mysqlx.Expect.Open.Condition.op)
}

// -------------------------------------------------------------------

// Open

// optional .Mysqlx.Expect.Open.CtxOperation op = 1 [default = EXPECT_CTX_COPY_PREV];
inline bool Open::has_op() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Open::set_has_op() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Open::clear_has_op() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Open::clear_op() {
  op_ = 0;
  clear_has_op();
}
inline ::Mysqlx::Expect::Open_CtxOperation Open::op() const {
  // @@protoc_insertion_point(field_get:Mysqlx.Expect.Open.op)
  return static_cast< ::Mysqlx::Expect::Open_CtxOperation >(op_);
}
inline void Open::set_op(::Mysqlx::Expect::Open_CtxOperation value) {
  assert(::Mysqlx::Expect::Open_CtxOperation_IsValid(value));
  set_has_op();
  op_ = value;
  // @@protoc_insertion_point(field_set:Mysqlx.Expect.Open.op)
}

// repeated .Mysqlx.Expect.Open.Condition cond = 2;
inline int Open::cond_size() const {
  return cond_.size();
}
inline void Open::clear_cond() {
  cond_.Clear();
}
inline const ::Mysqlx::Expect::Open_Condition& Open::cond(int index) const {
  // @@protoc_insertion_point(field_get:Mysqlx.Expect.Open.cond)
  return cond_.Get(index);
}
inline ::Mysqlx::Expect::Open_Condition* Open::mutable_cond(int index) {
  // @@protoc_insertion_point(field_mutable:Mysqlx.Expect.Open.cond)
  return cond_.Mutable(index);
}
inline ::Mysqlx::Expect::Open_Condition* Open::add_cond() {
  // @@protoc_insertion_point(field_add:Mysqlx.Expect.Open.cond)
  return cond_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Mysqlx::Expect::Open_Condition >&
Open::cond() const {
  // @@protoc_insertion_point(field_list:Mysqlx.Expect.Open.cond)
  return cond_;
}
inline ::google::protobuf::RepeatedPtrField< ::Mysqlx::Expect::Open_Condition >*
Open::mutable_cond() {
  // @@protoc_insertion_point(field_mutable_list:Mysqlx.Expect.Open.cond)
  return &cond_;
}

// -------------------------------------------------------------------

// Close


// @@protoc_insertion_point(namespace_scope)

}  // namespace Expect
}  // namespace Mysqlx

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Mysqlx::Expect::Open_Condition_ConditionOperation> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Mysqlx::Expect::Open_Condition_ConditionOperation>() {
  return ::Mysqlx::Expect::Open_Condition_ConditionOperation_descriptor();
}
template <> struct is_proto_enum< ::Mysqlx::Expect::Open_CtxOperation> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Mysqlx::Expect::Open_CtxOperation>() {
  return ::Mysqlx::Expect::Open_CtxOperation_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mysqlx_5fexpect_2eproto__INCLUDED

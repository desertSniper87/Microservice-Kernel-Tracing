/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "media_service_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace media_service {

int _kErrorCodeValues[] = {
  ErrorCode::SE_THRIFT_CONNPOOL_TIMEOUT,
  ErrorCode::SE_THRIFT_CONN_ERROR,
  ErrorCode::SE_UNAUTHORIZED,
  ErrorCode::SE_MEMCACHED_ERROR,
  ErrorCode::SE_MONGODB_ERROR,
  ErrorCode::SE_REDIS_ERROR,
  ErrorCode::SE_THRIFT_HANDLER_ERROR
};
const char* _kErrorCodeNames[] = {
  "SE_THRIFT_CONNPOOL_TIMEOUT",
  "SE_THRIFT_CONN_ERROR",
  "SE_UNAUTHORIZED",
  "SE_MEMCACHED_ERROR",
  "SE_MONGODB_ERROR",
  "SE_REDIS_ERROR",
  "SE_THRIFT_HANDLER_ERROR"
};
const std::map<int, const char*> _ErrorCode_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(7, _kErrorCodeValues, _kErrorCodeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const ErrorCode::type& val) {
  std::map<int, const char*>::const_iterator it = _ErrorCode_VALUES_TO_NAMES.find(val);
  if (it != _ErrorCode_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}


User::~User() throw() {
}


void User::__set_user_id(const int64_t val) {
  this->user_id = val;
}

void User::__set_first_name(const std::string& val) {
  this->first_name = val;
}

void User::__set_last_name(const std::string& val) {
  this->last_name = val;
}

void User::__set_username(const std::string& val) {
  this->username = val;
}

void User::__set_password(const std::string& val) {
  this->password = val;
}

void User::__set_salt(const std::string& val) {
  this->salt = val;
}
std::ostream& operator<<(std::ostream& out, const User& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t User::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->user_id);
          this->__isset.user_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->first_name);
          this->__isset.first_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->last_name);
          this->__isset.last_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->username);
          this->__isset.username = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->password);
          this->__isset.password = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->salt);
          this->__isset.salt = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t User::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("User");

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->user_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("first_name", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->first_name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("last_name", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->last_name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("username", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->username);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("password", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->password);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("salt", ::apache::thrift::protocol::T_STRING, 6);
  xfer += oprot->writeString(this->salt);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(User &a, User &b) {
  using ::std::swap;
  swap(a.user_id, b.user_id);
  swap(a.first_name, b.first_name);
  swap(a.last_name, b.last_name);
  swap(a.username, b.username);
  swap(a.password, b.password);
  swap(a.salt, b.salt);
  swap(a.__isset, b.__isset);
}

User::User(const User& other0) {
  user_id = other0.user_id;
  first_name = other0.first_name;
  last_name = other0.last_name;
  username = other0.username;
  password = other0.password;
  salt = other0.salt;
  __isset = other0.__isset;
}
User& User::operator=(const User& other1) {
  user_id = other1.user_id;
  first_name = other1.first_name;
  last_name = other1.last_name;
  username = other1.username;
  password = other1.password;
  salt = other1.salt;
  __isset = other1.__isset;
  return *this;
}
void User::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "User(";
  out << "user_id=" << to_string(user_id);
  out << ", " << "first_name=" << to_string(first_name);
  out << ", " << "last_name=" << to_string(last_name);
  out << ", " << "username=" << to_string(username);
  out << ", " << "password=" << to_string(password);
  out << ", " << "salt=" << to_string(salt);
  out << ")";
}


Review::~Review() throw() {
}


void Review::__set_review_id(const int64_t val) {
  this->review_id = val;
}

void Review::__set_user_id(const int64_t val) {
  this->user_id = val;
}

void Review::__set_req_id(const int64_t val) {
  this->req_id = val;
}

void Review::__set_text(const std::string& val) {
  this->text = val;
}

void Review::__set_movie_id(const std::string& val) {
  this->movie_id = val;
}

void Review::__set_rating(const int32_t val) {
  this->rating = val;
}

void Review::__set_timestamp(const int64_t val) {
  this->timestamp = val;
}
std::ostream& operator<<(std::ostream& out, const Review& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Review::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->review_id);
          this->__isset.review_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->user_id);
          this->__isset.user_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->req_id);
          this->__isset.req_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->text);
          this->__isset.text = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->movie_id);
          this->__isset.movie_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->rating);
          this->__isset.rating = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timestamp);
          this->__isset.timestamp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Review::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Review");

  xfer += oprot->writeFieldBegin("review_id", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->review_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->user_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("req_id", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->req_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("text", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->text);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("movie_id", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->movie_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("rating", ::apache::thrift::protocol::T_I32, 6);
  xfer += oprot->writeI32(this->rating);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timestamp", ::apache::thrift::protocol::T_I64, 7);
  xfer += oprot->writeI64(this->timestamp);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Review &a, Review &b) {
  using ::std::swap;
  swap(a.review_id, b.review_id);
  swap(a.user_id, b.user_id);
  swap(a.req_id, b.req_id);
  swap(a.text, b.text);
  swap(a.movie_id, b.movie_id);
  swap(a.rating, b.rating);
  swap(a.timestamp, b.timestamp);
  swap(a.__isset, b.__isset);
}

Review::Review(const Review& other2) {
  review_id = other2.review_id;
  user_id = other2.user_id;
  req_id = other2.req_id;
  text = other2.text;
  movie_id = other2.movie_id;
  rating = other2.rating;
  timestamp = other2.timestamp;
  __isset = other2.__isset;
}
Review& Review::operator=(const Review& other3) {
  review_id = other3.review_id;
  user_id = other3.user_id;
  req_id = other3.req_id;
  text = other3.text;
  movie_id = other3.movie_id;
  rating = other3.rating;
  timestamp = other3.timestamp;
  __isset = other3.__isset;
  return *this;
}
void Review::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Review(";
  out << "review_id=" << to_string(review_id);
  out << ", " << "user_id=" << to_string(user_id);
  out << ", " << "req_id=" << to_string(req_id);
  out << ", " << "text=" << to_string(text);
  out << ", " << "movie_id=" << to_string(movie_id);
  out << ", " << "rating=" << to_string(rating);
  out << ", " << "timestamp=" << to_string(timestamp);
  out << ")";
}


CastInfo::~CastInfo() throw() {
}


void CastInfo::__set_cast_info_id(const int64_t val) {
  this->cast_info_id = val;
}

void CastInfo::__set_name(const std::string& val) {
  this->name = val;
}

void CastInfo::__set_gender(const bool val) {
  this->gender = val;
}

void CastInfo::__set_intro(const std::string& val) {
  this->intro = val;
}
std::ostream& operator<<(std::ostream& out, const CastInfo& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t CastInfo::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->cast_info_id);
          this->__isset.cast_info_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->gender);
          this->__isset.gender = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->intro);
          this->__isset.intro = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CastInfo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CastInfo");

  xfer += oprot->writeFieldBegin("cast_info_id", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->cast_info_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("gender", ::apache::thrift::protocol::T_BOOL, 3);
  xfer += oprot->writeBool(this->gender);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("intro", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->intro);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CastInfo &a, CastInfo &b) {
  using ::std::swap;
  swap(a.cast_info_id, b.cast_info_id);
  swap(a.name, b.name);
  swap(a.gender, b.gender);
  swap(a.intro, b.intro);
  swap(a.__isset, b.__isset);
}

CastInfo::CastInfo(const CastInfo& other4) {
  cast_info_id = other4.cast_info_id;
  name = other4.name;
  gender = other4.gender;
  intro = other4.intro;
  __isset = other4.__isset;
}
CastInfo& CastInfo::operator=(const CastInfo& other5) {
  cast_info_id = other5.cast_info_id;
  name = other5.name;
  gender = other5.gender;
  intro = other5.intro;
  __isset = other5.__isset;
  return *this;
}
void CastInfo::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CastInfo(";
  out << "cast_info_id=" << to_string(cast_info_id);
  out << ", " << "name=" << to_string(name);
  out << ", " << "gender=" << to_string(gender);
  out << ", " << "intro=" << to_string(intro);
  out << ")";
}


Cast::~Cast() throw() {
}


void Cast::__set_cast_id(const int32_t val) {
  this->cast_id = val;
}

void Cast::__set_character(const std::string& val) {
  this->character = val;
}

void Cast::__set_cast_info_id(const int64_t val) {
  this->cast_info_id = val;
}
std::ostream& operator<<(std::ostream& out, const Cast& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Cast::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->cast_id);
          this->__isset.cast_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->character);
          this->__isset.character = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->cast_info_id);
          this->__isset.cast_info_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Cast::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Cast");

  xfer += oprot->writeFieldBegin("cast_id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->cast_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("character", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->character);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cast_info_id", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->cast_info_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Cast &a, Cast &b) {
  using ::std::swap;
  swap(a.cast_id, b.cast_id);
  swap(a.character, b.character);
  swap(a.cast_info_id, b.cast_info_id);
  swap(a.__isset, b.__isset);
}

Cast::Cast(const Cast& other6) {
  cast_id = other6.cast_id;
  character = other6.character;
  cast_info_id = other6.cast_info_id;
  __isset = other6.__isset;
}
Cast& Cast::operator=(const Cast& other7) {
  cast_id = other7.cast_id;
  character = other7.character;
  cast_info_id = other7.cast_info_id;
  __isset = other7.__isset;
  return *this;
}
void Cast::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Cast(";
  out << "cast_id=" << to_string(cast_id);
  out << ", " << "character=" << to_string(character);
  out << ", " << "cast_info_id=" << to_string(cast_info_id);
  out << ")";
}


MovieInfo::~MovieInfo() throw() {
}


void MovieInfo::__set_movie_id(const std::string& val) {
  this->movie_id = val;
}

void MovieInfo::__set_title(const std::string& val) {
  this->title = val;
}

void MovieInfo::__set_casts(const std::vector<Cast> & val) {
  this->casts = val;
}

void MovieInfo::__set_plot_id(const int64_t val) {
  this->plot_id = val;
}

void MovieInfo::__set_thumbnail_ids(const std::vector<std::string> & val) {
  this->thumbnail_ids = val;
}

void MovieInfo::__set_photo_ids(const std::vector<std::string> & val) {
  this->photo_ids = val;
}

void MovieInfo::__set_video_ids(const std::vector<std::string> & val) {
  this->video_ids = val;
}

void MovieInfo::__set_avg_rating(const double val) {
  this->avg_rating = val;
}

void MovieInfo::__set_num_rating(const int32_t val) {
  this->num_rating = val;
}
std::ostream& operator<<(std::ostream& out, const MovieInfo& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t MovieInfo::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->movie_id);
          this->__isset.movie_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->title);
          this->__isset.title = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->casts.clear();
            uint32_t _size8;
            ::apache::thrift::protocol::TType _etype11;
            xfer += iprot->readListBegin(_etype11, _size8);
            this->casts.resize(_size8);
            uint32_t _i12;
            for (_i12 = 0; _i12 < _size8; ++_i12)
            {
              xfer += this->casts[_i12].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.casts = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->plot_id);
          this->__isset.plot_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->thumbnail_ids.clear();
            uint32_t _size13;
            ::apache::thrift::protocol::TType _etype16;
            xfer += iprot->readListBegin(_etype16, _size13);
            this->thumbnail_ids.resize(_size13);
            uint32_t _i17;
            for (_i17 = 0; _i17 < _size13; ++_i17)
            {
              xfer += iprot->readString(this->thumbnail_ids[_i17]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.thumbnail_ids = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->photo_ids.clear();
            uint32_t _size18;
            ::apache::thrift::protocol::TType _etype21;
            xfer += iprot->readListBegin(_etype21, _size18);
            this->photo_ids.resize(_size18);
            uint32_t _i22;
            for (_i22 = 0; _i22 < _size18; ++_i22)
            {
              xfer += iprot->readString(this->photo_ids[_i22]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.photo_ids = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->video_ids.clear();
            uint32_t _size23;
            ::apache::thrift::protocol::TType _etype26;
            xfer += iprot->readListBegin(_etype26, _size23);
            this->video_ids.resize(_size23);
            uint32_t _i27;
            for (_i27 = 0; _i27 < _size23; ++_i27)
            {
              xfer += iprot->readString(this->video_ids[_i27]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.video_ids = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->avg_rating);
          this->__isset.avg_rating = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->num_rating);
          this->__isset.num_rating = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t MovieInfo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MovieInfo");

  xfer += oprot->writeFieldBegin("movie_id", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->movie_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("title", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->title);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("casts", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->casts.size()));
    std::vector<Cast> ::const_iterator _iter28;
    for (_iter28 = this->casts.begin(); _iter28 != this->casts.end(); ++_iter28)
    {
      xfer += (*_iter28).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("plot_id", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->plot_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("thumbnail_ids", ::apache::thrift::protocol::T_LIST, 5);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->thumbnail_ids.size()));
    std::vector<std::string> ::const_iterator _iter29;
    for (_iter29 = this->thumbnail_ids.begin(); _iter29 != this->thumbnail_ids.end(); ++_iter29)
    {
      xfer += oprot->writeString((*_iter29));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("photo_ids", ::apache::thrift::protocol::T_LIST, 6);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->photo_ids.size()));
    std::vector<std::string> ::const_iterator _iter30;
    for (_iter30 = this->photo_ids.begin(); _iter30 != this->photo_ids.end(); ++_iter30)
    {
      xfer += oprot->writeString((*_iter30));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("video_ids", ::apache::thrift::protocol::T_LIST, 7);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->video_ids.size()));
    std::vector<std::string> ::const_iterator _iter31;
    for (_iter31 = this->video_ids.begin(); _iter31 != this->video_ids.end(); ++_iter31)
    {
      xfer += oprot->writeString((*_iter31));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("avg_rating", ::apache::thrift::protocol::T_DOUBLE, 8);
  xfer += oprot->writeDouble(this->avg_rating);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("num_rating", ::apache::thrift::protocol::T_I32, 9);
  xfer += oprot->writeI32(this->num_rating);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MovieInfo &a, MovieInfo &b) {
  using ::std::swap;
  swap(a.movie_id, b.movie_id);
  swap(a.title, b.title);
  swap(a.casts, b.casts);
  swap(a.plot_id, b.plot_id);
  swap(a.thumbnail_ids, b.thumbnail_ids);
  swap(a.photo_ids, b.photo_ids);
  swap(a.video_ids, b.video_ids);
  swap(a.avg_rating, b.avg_rating);
  swap(a.num_rating, b.num_rating);
  swap(a.__isset, b.__isset);
}

MovieInfo::MovieInfo(const MovieInfo& other32) {
  movie_id = other32.movie_id;
  title = other32.title;
  casts = other32.casts;
  plot_id = other32.plot_id;
  thumbnail_ids = other32.thumbnail_ids;
  photo_ids = other32.photo_ids;
  video_ids = other32.video_ids;
  avg_rating = other32.avg_rating;
  num_rating = other32.num_rating;
  __isset = other32.__isset;
}
MovieInfo& MovieInfo::operator=(const MovieInfo& other33) {
  movie_id = other33.movie_id;
  title = other33.title;
  casts = other33.casts;
  plot_id = other33.plot_id;
  thumbnail_ids = other33.thumbnail_ids;
  photo_ids = other33.photo_ids;
  video_ids = other33.video_ids;
  avg_rating = other33.avg_rating;
  num_rating = other33.num_rating;
  __isset = other33.__isset;
  return *this;
}
void MovieInfo::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "MovieInfo(";
  out << "movie_id=" << to_string(movie_id);
  out << ", " << "title=" << to_string(title);
  out << ", " << "casts=" << to_string(casts);
  out << ", " << "plot_id=" << to_string(plot_id);
  out << ", " << "thumbnail_ids=" << to_string(thumbnail_ids);
  out << ", " << "photo_ids=" << to_string(photo_ids);
  out << ", " << "video_ids=" << to_string(video_ids);
  out << ", " << "avg_rating=" << to_string(avg_rating);
  out << ", " << "num_rating=" << to_string(num_rating);
  out << ")";
}


Page::~Page() throw() {
}


void Page::__set_movie_info(const MovieInfo& val) {
  this->movie_info = val;
}

void Page::__set_reviews(const std::vector<Review> & val) {
  this->reviews = val;
}

void Page::__set_cast_infos(const std::vector<CastInfo> & val) {
  this->cast_infos = val;
}

void Page::__set_plot(const std::string& val) {
  this->plot = val;
}
std::ostream& operator<<(std::ostream& out, const Page& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Page::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->movie_info.read(iprot);
          this->__isset.movie_info = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->reviews.clear();
            uint32_t _size34;
            ::apache::thrift::protocol::TType _etype37;
            xfer += iprot->readListBegin(_etype37, _size34);
            this->reviews.resize(_size34);
            uint32_t _i38;
            for (_i38 = 0; _i38 < _size34; ++_i38)
            {
              xfer += this->reviews[_i38].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.reviews = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->cast_infos.clear();
            uint32_t _size39;
            ::apache::thrift::protocol::TType _etype42;
            xfer += iprot->readListBegin(_etype42, _size39);
            this->cast_infos.resize(_size39);
            uint32_t _i43;
            for (_i43 = 0; _i43 < _size39; ++_i43)
            {
              xfer += this->cast_infos[_i43].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.cast_infos = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->plot);
          this->__isset.plot = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Page::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Page");

  xfer += oprot->writeFieldBegin("movie_info", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->movie_info.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("reviews", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->reviews.size()));
    std::vector<Review> ::const_iterator _iter44;
    for (_iter44 = this->reviews.begin(); _iter44 != this->reviews.end(); ++_iter44)
    {
      xfer += (*_iter44).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("cast_infos", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->cast_infos.size()));
    std::vector<CastInfo> ::const_iterator _iter45;
    for (_iter45 = this->cast_infos.begin(); _iter45 != this->cast_infos.end(); ++_iter45)
    {
      xfer += (*_iter45).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("plot", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->plot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Page &a, Page &b) {
  using ::std::swap;
  swap(a.movie_info, b.movie_info);
  swap(a.reviews, b.reviews);
  swap(a.cast_infos, b.cast_infos);
  swap(a.plot, b.plot);
  swap(a.__isset, b.__isset);
}

Page::Page(const Page& other46) {
  movie_info = other46.movie_info;
  reviews = other46.reviews;
  cast_infos = other46.cast_infos;
  plot = other46.plot;
  __isset = other46.__isset;
}
Page& Page::operator=(const Page& other47) {
  movie_info = other47.movie_info;
  reviews = other47.reviews;
  cast_infos = other47.cast_infos;
  plot = other47.plot;
  __isset = other47.__isset;
  return *this;
}
void Page::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Page(";
  out << "movie_info=" << to_string(movie_info);
  out << ", " << "reviews=" << to_string(reviews);
  out << ", " << "cast_infos=" << to_string(cast_infos);
  out << ", " << "plot=" << to_string(plot);
  out << ")";
}


ServiceException::~ServiceException() throw() {
}


void ServiceException::__set_errorCode(const ErrorCode::type val) {
  this->errorCode = val;
}

void ServiceException::__set_message(const std::string& val) {
  this->message = val;
}
std::ostream& operator<<(std::ostream& out, const ServiceException& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t ServiceException::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast48;
          xfer += iprot->readI32(ecast48);
          this->errorCode = (ErrorCode::type)ecast48;
          this->__isset.errorCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ServiceException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ServiceException");

  xfer += oprot->writeFieldBegin("errorCode", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->errorCode);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ServiceException &a, ServiceException &b) {
  using ::std::swap;
  swap(a.errorCode, b.errorCode);
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

ServiceException::ServiceException(const ServiceException& other49) : TException() {
  errorCode = other49.errorCode;
  message = other49.message;
  __isset = other49.__isset;
}
ServiceException& ServiceException::operator=(const ServiceException& other50) {
  errorCode = other50.errorCode;
  message = other50.message;
  __isset = other50.__isset;
  return *this;
}
void ServiceException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ServiceException(";
  out << "errorCode=" << to_string(errorCode);
  out << ", " << "message=" << to_string(message);
  out << ")";
}

const char* ServiceException::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: ServiceException";
  }
}

} // namespace

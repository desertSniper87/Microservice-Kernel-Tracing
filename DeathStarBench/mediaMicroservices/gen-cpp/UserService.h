/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef UserService_H
#define UserService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "media_service_types.h"

namespace media_service {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class UserServiceIf {
 public:
  virtual ~UserServiceIf() {}
  virtual void RegisterUser(const int64_t req_id, const std::string& first_name, const std::string& last_name, const std::string& username, const std::string& password, const std::map<std::string, std::string> & carrier) = 0;
  virtual void RegisterUserWithId(const int64_t req_id, const std::string& first_name, const std::string& last_name, const std::string& username, const std::string& password, const int64_t user_id, const std::map<std::string, std::string> & carrier) = 0;
  virtual void Login(std::string& _return, const int64_t req_id, const std::string& username, const std::string& password, const std::map<std::string, std::string> & carrier) = 0;
  virtual void UploadUserWithUserId(const int64_t req_id, const int64_t user_id, const std::map<std::string, std::string> & carrier) = 0;
  virtual void UploadUserWithUsername(const int64_t req_id, const std::string& username, const std::map<std::string, std::string> & carrier) = 0;
};

class UserServiceIfFactory {
 public:
  typedef UserServiceIf Handler;

  virtual ~UserServiceIfFactory() {}

  virtual UserServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(UserServiceIf* /* handler */) = 0;
};

class UserServiceIfSingletonFactory : virtual public UserServiceIfFactory {
 public:
  UserServiceIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<UserServiceIf>& iface) : iface_(iface) {}
  virtual ~UserServiceIfSingletonFactory() {}

  virtual UserServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(UserServiceIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<UserServiceIf> iface_;
};

class UserServiceNull : virtual public UserServiceIf {
 public:
  virtual ~UserServiceNull() {}
  void RegisterUser(const int64_t /* req_id */, const std::string& /* first_name */, const std::string& /* last_name */, const std::string& /* username */, const std::string& /* password */, const std::map<std::string, std::string> & /* carrier */) {
    return;
  }
  void RegisterUserWithId(const int64_t /* req_id */, const std::string& /* first_name */, const std::string& /* last_name */, const std::string& /* username */, const std::string& /* password */, const int64_t /* user_id */, const std::map<std::string, std::string> & /* carrier */) {
    return;
  }
  void Login(std::string& /* _return */, const int64_t /* req_id */, const std::string& /* username */, const std::string& /* password */, const std::map<std::string, std::string> & /* carrier */) {
    return;
  }
  void UploadUserWithUserId(const int64_t /* req_id */, const int64_t /* user_id */, const std::map<std::string, std::string> & /* carrier */) {
    return;
  }
  void UploadUserWithUsername(const int64_t /* req_id */, const std::string& /* username */, const std::map<std::string, std::string> & /* carrier */) {
    return;
  }
};

typedef struct _UserService_RegisterUser_args__isset {
  _UserService_RegisterUser_args__isset() : req_id(false), first_name(false), last_name(false), username(false), password(false), carrier(false) {}
  bool req_id :1;
  bool first_name :1;
  bool last_name :1;
  bool username :1;
  bool password :1;
  bool carrier :1;
} _UserService_RegisterUser_args__isset;

class UserService_RegisterUser_args {
 public:

  UserService_RegisterUser_args(const UserService_RegisterUser_args&);
  UserService_RegisterUser_args& operator=(const UserService_RegisterUser_args&);
  UserService_RegisterUser_args() : req_id(0), first_name(), last_name(), username(), password() {
  }

  virtual ~UserService_RegisterUser_args() throw();
  int64_t req_id;
  std::string first_name;
  std::string last_name;
  std::string username;
  std::string password;
  std::map<std::string, std::string>  carrier;

  _UserService_RegisterUser_args__isset __isset;

  void __set_req_id(const int64_t val);

  void __set_first_name(const std::string& val);

  void __set_last_name(const std::string& val);

  void __set_username(const std::string& val);

  void __set_password(const std::string& val);

  void __set_carrier(const std::map<std::string, std::string> & val);

  bool operator == (const UserService_RegisterUser_args & rhs) const
  {
    if (!(req_id == rhs.req_id))
      return false;
    if (!(first_name == rhs.first_name))
      return false;
    if (!(last_name == rhs.last_name))
      return false;
    if (!(username == rhs.username))
      return false;
    if (!(password == rhs.password))
      return false;
    if (!(carrier == rhs.carrier))
      return false;
    return true;
  }
  bool operator != (const UserService_RegisterUser_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_RegisterUser_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UserService_RegisterUser_pargs {
 public:


  virtual ~UserService_RegisterUser_pargs() throw();
  const int64_t* req_id;
  const std::string* first_name;
  const std::string* last_name;
  const std::string* username;
  const std::string* password;
  const std::map<std::string, std::string> * carrier;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserService_RegisterUser_result__isset {
  _UserService_RegisterUser_result__isset() : se(false) {}
  bool se :1;
} _UserService_RegisterUser_result__isset;

class UserService_RegisterUser_result {
 public:

  UserService_RegisterUser_result(const UserService_RegisterUser_result&);
  UserService_RegisterUser_result& operator=(const UserService_RegisterUser_result&);
  UserService_RegisterUser_result() {
  }

  virtual ~UserService_RegisterUser_result() throw();
  ServiceException se;

  _UserService_RegisterUser_result__isset __isset;

  void __set_se(const ServiceException& val);

  bool operator == (const UserService_RegisterUser_result & rhs) const
  {
    if (!(se == rhs.se))
      return false;
    return true;
  }
  bool operator != (const UserService_RegisterUser_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_RegisterUser_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserService_RegisterUser_presult__isset {
  _UserService_RegisterUser_presult__isset() : se(false) {}
  bool se :1;
} _UserService_RegisterUser_presult__isset;

class UserService_RegisterUser_presult {
 public:


  virtual ~UserService_RegisterUser_presult() throw();
  ServiceException se;

  _UserService_RegisterUser_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _UserService_RegisterUserWithId_args__isset {
  _UserService_RegisterUserWithId_args__isset() : req_id(false), first_name(false), last_name(false), username(false), password(false), user_id(false), carrier(false) {}
  bool req_id :1;
  bool first_name :1;
  bool last_name :1;
  bool username :1;
  bool password :1;
  bool user_id :1;
  bool carrier :1;
} _UserService_RegisterUserWithId_args__isset;

class UserService_RegisterUserWithId_args {
 public:

  UserService_RegisterUserWithId_args(const UserService_RegisterUserWithId_args&);
  UserService_RegisterUserWithId_args& operator=(const UserService_RegisterUserWithId_args&);
  UserService_RegisterUserWithId_args() : req_id(0), first_name(), last_name(), username(), password(), user_id(0) {
  }

  virtual ~UserService_RegisterUserWithId_args() throw();
  int64_t req_id;
  std::string first_name;
  std::string last_name;
  std::string username;
  std::string password;
  int64_t user_id;
  std::map<std::string, std::string>  carrier;

  _UserService_RegisterUserWithId_args__isset __isset;

  void __set_req_id(const int64_t val);

  void __set_first_name(const std::string& val);

  void __set_last_name(const std::string& val);

  void __set_username(const std::string& val);

  void __set_password(const std::string& val);

  void __set_user_id(const int64_t val);

  void __set_carrier(const std::map<std::string, std::string> & val);

  bool operator == (const UserService_RegisterUserWithId_args & rhs) const
  {
    if (!(req_id == rhs.req_id))
      return false;
    if (!(first_name == rhs.first_name))
      return false;
    if (!(last_name == rhs.last_name))
      return false;
    if (!(username == rhs.username))
      return false;
    if (!(password == rhs.password))
      return false;
    if (!(user_id == rhs.user_id))
      return false;
    if (!(carrier == rhs.carrier))
      return false;
    return true;
  }
  bool operator != (const UserService_RegisterUserWithId_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_RegisterUserWithId_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UserService_RegisterUserWithId_pargs {
 public:


  virtual ~UserService_RegisterUserWithId_pargs() throw();
  const int64_t* req_id;
  const std::string* first_name;
  const std::string* last_name;
  const std::string* username;
  const std::string* password;
  const int64_t* user_id;
  const std::map<std::string, std::string> * carrier;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserService_RegisterUserWithId_result__isset {
  _UserService_RegisterUserWithId_result__isset() : se(false) {}
  bool se :1;
} _UserService_RegisterUserWithId_result__isset;

class UserService_RegisterUserWithId_result {
 public:

  UserService_RegisterUserWithId_result(const UserService_RegisterUserWithId_result&);
  UserService_RegisterUserWithId_result& operator=(const UserService_RegisterUserWithId_result&);
  UserService_RegisterUserWithId_result() {
  }

  virtual ~UserService_RegisterUserWithId_result() throw();
  ServiceException se;

  _UserService_RegisterUserWithId_result__isset __isset;

  void __set_se(const ServiceException& val);

  bool operator == (const UserService_RegisterUserWithId_result & rhs) const
  {
    if (!(se == rhs.se))
      return false;
    return true;
  }
  bool operator != (const UserService_RegisterUserWithId_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_RegisterUserWithId_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserService_RegisterUserWithId_presult__isset {
  _UserService_RegisterUserWithId_presult__isset() : se(false) {}
  bool se :1;
} _UserService_RegisterUserWithId_presult__isset;

class UserService_RegisterUserWithId_presult {
 public:


  virtual ~UserService_RegisterUserWithId_presult() throw();
  ServiceException se;

  _UserService_RegisterUserWithId_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _UserService_Login_args__isset {
  _UserService_Login_args__isset() : req_id(false), username(false), password(false), carrier(false) {}
  bool req_id :1;
  bool username :1;
  bool password :1;
  bool carrier :1;
} _UserService_Login_args__isset;

class UserService_Login_args {
 public:

  UserService_Login_args(const UserService_Login_args&);
  UserService_Login_args& operator=(const UserService_Login_args&);
  UserService_Login_args() : req_id(0), username(), password() {
  }

  virtual ~UserService_Login_args() throw();
  int64_t req_id;
  std::string username;
  std::string password;
  std::map<std::string, std::string>  carrier;

  _UserService_Login_args__isset __isset;

  void __set_req_id(const int64_t val);

  void __set_username(const std::string& val);

  void __set_password(const std::string& val);

  void __set_carrier(const std::map<std::string, std::string> & val);

  bool operator == (const UserService_Login_args & rhs) const
  {
    if (!(req_id == rhs.req_id))
      return false;
    if (!(username == rhs.username))
      return false;
    if (!(password == rhs.password))
      return false;
    if (!(carrier == rhs.carrier))
      return false;
    return true;
  }
  bool operator != (const UserService_Login_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_Login_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UserService_Login_pargs {
 public:


  virtual ~UserService_Login_pargs() throw();
  const int64_t* req_id;
  const std::string* username;
  const std::string* password;
  const std::map<std::string, std::string> * carrier;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserService_Login_result__isset {
  _UserService_Login_result__isset() : success(false), se(false) {}
  bool success :1;
  bool se :1;
} _UserService_Login_result__isset;

class UserService_Login_result {
 public:

  UserService_Login_result(const UserService_Login_result&);
  UserService_Login_result& operator=(const UserService_Login_result&);
  UserService_Login_result() : success() {
  }

  virtual ~UserService_Login_result() throw();
  std::string success;
  ServiceException se;

  _UserService_Login_result__isset __isset;

  void __set_success(const std::string& val);

  void __set_se(const ServiceException& val);

  bool operator == (const UserService_Login_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(se == rhs.se))
      return false;
    return true;
  }
  bool operator != (const UserService_Login_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_Login_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserService_Login_presult__isset {
  _UserService_Login_presult__isset() : success(false), se(false) {}
  bool success :1;
  bool se :1;
} _UserService_Login_presult__isset;

class UserService_Login_presult {
 public:


  virtual ~UserService_Login_presult() throw();
  std::string* success;
  ServiceException se;

  _UserService_Login_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _UserService_UploadUserWithUserId_args__isset {
  _UserService_UploadUserWithUserId_args__isset() : req_id(false), user_id(false), carrier(false) {}
  bool req_id :1;
  bool user_id :1;
  bool carrier :1;
} _UserService_UploadUserWithUserId_args__isset;

class UserService_UploadUserWithUserId_args {
 public:

  UserService_UploadUserWithUserId_args(const UserService_UploadUserWithUserId_args&);
  UserService_UploadUserWithUserId_args& operator=(const UserService_UploadUserWithUserId_args&);
  UserService_UploadUserWithUserId_args() : req_id(0), user_id(0) {
  }

  virtual ~UserService_UploadUserWithUserId_args() throw();
  int64_t req_id;
  int64_t user_id;
  std::map<std::string, std::string>  carrier;

  _UserService_UploadUserWithUserId_args__isset __isset;

  void __set_req_id(const int64_t val);

  void __set_user_id(const int64_t val);

  void __set_carrier(const std::map<std::string, std::string> & val);

  bool operator == (const UserService_UploadUserWithUserId_args & rhs) const
  {
    if (!(req_id == rhs.req_id))
      return false;
    if (!(user_id == rhs.user_id))
      return false;
    if (!(carrier == rhs.carrier))
      return false;
    return true;
  }
  bool operator != (const UserService_UploadUserWithUserId_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_UploadUserWithUserId_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UserService_UploadUserWithUserId_pargs {
 public:


  virtual ~UserService_UploadUserWithUserId_pargs() throw();
  const int64_t* req_id;
  const int64_t* user_id;
  const std::map<std::string, std::string> * carrier;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserService_UploadUserWithUserId_result__isset {
  _UserService_UploadUserWithUserId_result__isset() : se(false) {}
  bool se :1;
} _UserService_UploadUserWithUserId_result__isset;

class UserService_UploadUserWithUserId_result {
 public:

  UserService_UploadUserWithUserId_result(const UserService_UploadUserWithUserId_result&);
  UserService_UploadUserWithUserId_result& operator=(const UserService_UploadUserWithUserId_result&);
  UserService_UploadUserWithUserId_result() {
  }

  virtual ~UserService_UploadUserWithUserId_result() throw();
  ServiceException se;

  _UserService_UploadUserWithUserId_result__isset __isset;

  void __set_se(const ServiceException& val);

  bool operator == (const UserService_UploadUserWithUserId_result & rhs) const
  {
    if (!(se == rhs.se))
      return false;
    return true;
  }
  bool operator != (const UserService_UploadUserWithUserId_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_UploadUserWithUserId_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserService_UploadUserWithUserId_presult__isset {
  _UserService_UploadUserWithUserId_presult__isset() : se(false) {}
  bool se :1;
} _UserService_UploadUserWithUserId_presult__isset;

class UserService_UploadUserWithUserId_presult {
 public:


  virtual ~UserService_UploadUserWithUserId_presult() throw();
  ServiceException se;

  _UserService_UploadUserWithUserId_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _UserService_UploadUserWithUsername_args__isset {
  _UserService_UploadUserWithUsername_args__isset() : req_id(false), username(false), carrier(false) {}
  bool req_id :1;
  bool username :1;
  bool carrier :1;
} _UserService_UploadUserWithUsername_args__isset;

class UserService_UploadUserWithUsername_args {
 public:

  UserService_UploadUserWithUsername_args(const UserService_UploadUserWithUsername_args&);
  UserService_UploadUserWithUsername_args& operator=(const UserService_UploadUserWithUsername_args&);
  UserService_UploadUserWithUsername_args() : req_id(0), username() {
  }

  virtual ~UserService_UploadUserWithUsername_args() throw();
  int64_t req_id;
  std::string username;
  std::map<std::string, std::string>  carrier;

  _UserService_UploadUserWithUsername_args__isset __isset;

  void __set_req_id(const int64_t val);

  void __set_username(const std::string& val);

  void __set_carrier(const std::map<std::string, std::string> & val);

  bool operator == (const UserService_UploadUserWithUsername_args & rhs) const
  {
    if (!(req_id == rhs.req_id))
      return false;
    if (!(username == rhs.username))
      return false;
    if (!(carrier == rhs.carrier))
      return false;
    return true;
  }
  bool operator != (const UserService_UploadUserWithUsername_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_UploadUserWithUsername_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UserService_UploadUserWithUsername_pargs {
 public:


  virtual ~UserService_UploadUserWithUsername_pargs() throw();
  const int64_t* req_id;
  const std::string* username;
  const std::map<std::string, std::string> * carrier;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserService_UploadUserWithUsername_result__isset {
  _UserService_UploadUserWithUsername_result__isset() : se(false) {}
  bool se :1;
} _UserService_UploadUserWithUsername_result__isset;

class UserService_UploadUserWithUsername_result {
 public:

  UserService_UploadUserWithUsername_result(const UserService_UploadUserWithUsername_result&);
  UserService_UploadUserWithUsername_result& operator=(const UserService_UploadUserWithUsername_result&);
  UserService_UploadUserWithUsername_result() {
  }

  virtual ~UserService_UploadUserWithUsername_result() throw();
  ServiceException se;

  _UserService_UploadUserWithUsername_result__isset __isset;

  void __set_se(const ServiceException& val);

  bool operator == (const UserService_UploadUserWithUsername_result & rhs) const
  {
    if (!(se == rhs.se))
      return false;
    return true;
  }
  bool operator != (const UserService_UploadUserWithUsername_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_UploadUserWithUsername_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserService_UploadUserWithUsername_presult__isset {
  _UserService_UploadUserWithUsername_presult__isset() : se(false) {}
  bool se :1;
} _UserService_UploadUserWithUsername_presult__isset;

class UserService_UploadUserWithUsername_presult {
 public:


  virtual ~UserService_UploadUserWithUsername_presult() throw();
  ServiceException se;

  _UserService_UploadUserWithUsername_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class UserServiceClient : virtual public UserServiceIf {
 public:
  UserServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  UserServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void RegisterUser(const int64_t req_id, const std::string& first_name, const std::string& last_name, const std::string& username, const std::string& password, const std::map<std::string, std::string> & carrier);
  void send_RegisterUser(const int64_t req_id, const std::string& first_name, const std::string& last_name, const std::string& username, const std::string& password, const std::map<std::string, std::string> & carrier);
  void recv_RegisterUser();
  void RegisterUserWithId(const int64_t req_id, const std::string& first_name, const std::string& last_name, const std::string& username, const std::string& password, const int64_t user_id, const std::map<std::string, std::string> & carrier);
  void send_RegisterUserWithId(const int64_t req_id, const std::string& first_name, const std::string& last_name, const std::string& username, const std::string& password, const int64_t user_id, const std::map<std::string, std::string> & carrier);
  void recv_RegisterUserWithId();
  void Login(std::string& _return, const int64_t req_id, const std::string& username, const std::string& password, const std::map<std::string, std::string> & carrier);
  void send_Login(const int64_t req_id, const std::string& username, const std::string& password, const std::map<std::string, std::string> & carrier);
  void recv_Login(std::string& _return);
  void UploadUserWithUserId(const int64_t req_id, const int64_t user_id, const std::map<std::string, std::string> & carrier);
  void send_UploadUserWithUserId(const int64_t req_id, const int64_t user_id, const std::map<std::string, std::string> & carrier);
  void recv_UploadUserWithUserId();
  void UploadUserWithUsername(const int64_t req_id, const std::string& username, const std::map<std::string, std::string> & carrier);
  void send_UploadUserWithUsername(const int64_t req_id, const std::string& username, const std::map<std::string, std::string> & carrier);
  void recv_UploadUserWithUsername();
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class UserServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<UserServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (UserServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_RegisterUser(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_RegisterUserWithId(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_Login(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_UploadUserWithUserId(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_UploadUserWithUsername(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  UserServiceProcessor(::apache::thrift::stdcxx::shared_ptr<UserServiceIf> iface) :
    iface_(iface) {
    processMap_["RegisterUser"] = &UserServiceProcessor::process_RegisterUser;
    processMap_["RegisterUserWithId"] = &UserServiceProcessor::process_RegisterUserWithId;
    processMap_["Login"] = &UserServiceProcessor::process_Login;
    processMap_["UploadUserWithUserId"] = &UserServiceProcessor::process_UploadUserWithUserId;
    processMap_["UploadUserWithUsername"] = &UserServiceProcessor::process_UploadUserWithUsername;
  }

  virtual ~UserServiceProcessor() {}
};

class UserServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  UserServiceProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< UserServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< UserServiceIfFactory > handlerFactory_;
};

class UserServiceMultiface : virtual public UserServiceIf {
 public:
  UserServiceMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<UserServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~UserServiceMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<UserServiceIf> > ifaces_;
  UserServiceMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<UserServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void RegisterUser(const int64_t req_id, const std::string& first_name, const std::string& last_name, const std::string& username, const std::string& password, const std::map<std::string, std::string> & carrier) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->RegisterUser(req_id, first_name, last_name, username, password, carrier);
    }
    ifaces_[i]->RegisterUser(req_id, first_name, last_name, username, password, carrier);
  }

  void RegisterUserWithId(const int64_t req_id, const std::string& first_name, const std::string& last_name, const std::string& username, const std::string& password, const int64_t user_id, const std::map<std::string, std::string> & carrier) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->RegisterUserWithId(req_id, first_name, last_name, username, password, user_id, carrier);
    }
    ifaces_[i]->RegisterUserWithId(req_id, first_name, last_name, username, password, user_id, carrier);
  }

  void Login(std::string& _return, const int64_t req_id, const std::string& username, const std::string& password, const std::map<std::string, std::string> & carrier) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->Login(_return, req_id, username, password, carrier);
    }
    ifaces_[i]->Login(_return, req_id, username, password, carrier);
    return;
  }

  void UploadUserWithUserId(const int64_t req_id, const int64_t user_id, const std::map<std::string, std::string> & carrier) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->UploadUserWithUserId(req_id, user_id, carrier);
    }
    ifaces_[i]->UploadUserWithUserId(req_id, user_id, carrier);
  }

  void UploadUserWithUsername(const int64_t req_id, const std::string& username, const std::map<std::string, std::string> & carrier) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->UploadUserWithUsername(req_id, username, carrier);
    }
    ifaces_[i]->UploadUserWithUsername(req_id, username, carrier);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class UserServiceConcurrentClient : virtual public UserServiceIf {
 public:
  UserServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  UserServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void RegisterUser(const int64_t req_id, const std::string& first_name, const std::string& last_name, const std::string& username, const std::string& password, const std::map<std::string, std::string> & carrier);
  int32_t send_RegisterUser(const int64_t req_id, const std::string& first_name, const std::string& last_name, const std::string& username, const std::string& password, const std::map<std::string, std::string> & carrier);
  void recv_RegisterUser(const int32_t seqid);
  void RegisterUserWithId(const int64_t req_id, const std::string& first_name, const std::string& last_name, const std::string& username, const std::string& password, const int64_t user_id, const std::map<std::string, std::string> & carrier);
  int32_t send_RegisterUserWithId(const int64_t req_id, const std::string& first_name, const std::string& last_name, const std::string& username, const std::string& password, const int64_t user_id, const std::map<std::string, std::string> & carrier);
  void recv_RegisterUserWithId(const int32_t seqid);
  void Login(std::string& _return, const int64_t req_id, const std::string& username, const std::string& password, const std::map<std::string, std::string> & carrier);
  int32_t send_Login(const int64_t req_id, const std::string& username, const std::string& password, const std::map<std::string, std::string> & carrier);
  void recv_Login(std::string& _return, const int32_t seqid);
  void UploadUserWithUserId(const int64_t req_id, const int64_t user_id, const std::map<std::string, std::string> & carrier);
  int32_t send_UploadUserWithUserId(const int64_t req_id, const int64_t user_id, const std::map<std::string, std::string> & carrier);
  void recv_UploadUserWithUserId(const int32_t seqid);
  void UploadUserWithUsername(const int64_t req_id, const std::string& username, const std::map<std::string, std::string> & carrier);
  int32_t send_UploadUserWithUsername(const int64_t req_id, const std::string& username, const std::map<std::string, std::string> & carrier);
  void recv_UploadUserWithUsername(const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif

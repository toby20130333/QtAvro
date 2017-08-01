/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef USER_SCHEMA_HH_121228738__H_
#define USER_SCHEMA_HH_121228738__H_


#include <sstream>
#include "boost/any.hpp"
#include "avro/Specific.hh"
#include "avro/Encoder.hh"
#include "avro/Decoder.hh"

namespace c {
struct user_schema_avsc_Union__0__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    int32_t get_int() const;
    void set_int(const int32_t& v);
    user_schema_avsc_Union__0__();
};

struct user_schema_avsc_Union__1__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    std::string get_string() const;
    void set_string(const std::string& v);
    user_schema_avsc_Union__1__();
};

struct user_schema_avsc_Union__2__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    std::string get_string() const;
    void set_string(const std::string& v);
    user_schema_avsc_Union__2__();
};

struct user_schema_avsc_Union__3__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    float get_float() const;
    void set_float(const float& v);
    user_schema_avsc_Union__3__();
};

struct user_schema_avsc_Union__4__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    std::string get_string() const;
    void set_string(const std::string& v);
    user_schema_avsc_Union__4__();
};

struct user_schema_avsc_Union__5__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    std::string get_string() const;
    void set_string(const std::string& v);
    user_schema_avsc_Union__5__();
};

struct Whatever {
    typedef user_schema_avsc_Union__5__ name_t;
    name_t name;
    Whatever() :
        name(name_t())
        { }
};

struct user_schema_avsc_Union__6__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    Whatever get_Whatever() const;
    void set_Whatever(const Whatever& v);
    user_schema_avsc_Union__6__();
};

struct user_schema_avsc_Union__7__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    std::vector<user_schema_avsc_Union__6__ > get_array() const;
    void set_array(const std::vector<user_schema_avsc_Union__6__ >& v);
    user_schema_avsc_Union__7__();
};

struct Facility {
    typedef user_schema_avsc_Union__2__ name_t;
    typedef user_schema_avsc_Union__3__ cost_t;
    typedef user_schema_avsc_Union__4__ returnedDate_t;
    typedef user_schema_avsc_Union__7__ whatevers_t;
    name_t name;
    cost_t cost;
    returnedDate_t returnedDate;
    whatevers_t whatevers;
    Facility() :
        name(name_t()),
        cost(cost_t()),
        returnedDate(returnedDate_t()),
        whatevers(whatevers_t())
        { }
};

struct user_schema_avsc_Union__8__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    Facility get_Facility() const;
    void set_Facility(const Facility& v);
    user_schema_avsc_Union__8__();
};

struct user_schema_avsc_Union__9__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    std::map<std::string, user_schema_avsc_Union__8__ > get_map() const;
    void set_map(const std::map<std::string, user_schema_avsc_Union__8__ >& v);
    user_schema_avsc_Union__9__();
};

struct User {
    typedef user_schema_avsc_Union__0__ age_t;
    typedef user_schema_avsc_Union__1__ name_t;
    typedef user_schema_avsc_Union__9__ facilities_t;
    age_t age;
    name_t name;
    facilities_t facilities;
    User() :
        age(age_t()),
        name(name_t()),
        facilities(facilities_t())
        { }
};

struct user_schema_avsc_Union__10__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    User get_User() const;
    void set_User(const User& v);
    user_schema_avsc_Union__10__();
};

inline
int32_t user_schema_avsc_Union__0__::get_int() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<int32_t >(value_);
}

inline
void user_schema_avsc_Union__0__::set_int(const int32_t& v) {
    idx_ = 1;
    value_ = v;
}

inline
std::string user_schema_avsc_Union__1__::get_string() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::string >(value_);
}

inline
void user_schema_avsc_Union__1__::set_string(const std::string& v) {
    idx_ = 1;
    value_ = v;
}

inline
std::string user_schema_avsc_Union__2__::get_string() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::string >(value_);
}

inline
void user_schema_avsc_Union__2__::set_string(const std::string& v) {
    idx_ = 1;
    value_ = v;
}

inline
float user_schema_avsc_Union__3__::get_float() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<float >(value_);
}

inline
void user_schema_avsc_Union__3__::set_float(const float& v) {
    idx_ = 1;
    value_ = v;
}

inline
std::string user_schema_avsc_Union__4__::get_string() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::string >(value_);
}

inline
void user_schema_avsc_Union__4__::set_string(const std::string& v) {
    idx_ = 1;
    value_ = v;
}

inline
std::string user_schema_avsc_Union__5__::get_string() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::string >(value_);
}

inline
void user_schema_avsc_Union__5__::set_string(const std::string& v) {
    idx_ = 1;
    value_ = v;
}

inline
Whatever user_schema_avsc_Union__6__::get_Whatever() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Whatever >(value_);
}

inline
void user_schema_avsc_Union__6__::set_Whatever(const Whatever& v) {
    idx_ = 1;
    value_ = v;
}

inline
std::vector<user_schema_avsc_Union__6__ > user_schema_avsc_Union__7__::get_array() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<user_schema_avsc_Union__6__ > >(value_);
}

inline
void user_schema_avsc_Union__7__::set_array(const std::vector<user_schema_avsc_Union__6__ >& v) {
    idx_ = 1;
    value_ = v;
}

inline
Facility user_schema_avsc_Union__8__::get_Facility() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Facility >(value_);
}

inline
void user_schema_avsc_Union__8__::set_Facility(const Facility& v) {
    idx_ = 1;
    value_ = v;
}

inline
std::map<std::string, user_schema_avsc_Union__8__ > user_schema_avsc_Union__9__::get_map() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::map<std::string, user_schema_avsc_Union__8__ > >(value_);
}

inline
void user_schema_avsc_Union__9__::set_map(const std::map<std::string, user_schema_avsc_Union__8__ >& v) {
    idx_ = 1;
    value_ = v;
}

inline
User user_schema_avsc_Union__10__::get_User() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<User >(value_);
}

inline
void user_schema_avsc_Union__10__::set_User(const User& v) {
    idx_ = 1;
    value_ = v;
}

inline user_schema_avsc_Union__0__::user_schema_avsc_Union__0__() : idx_(0) { }
inline user_schema_avsc_Union__1__::user_schema_avsc_Union__1__() : idx_(0) { }
inline user_schema_avsc_Union__2__::user_schema_avsc_Union__2__() : idx_(0) { }
inline user_schema_avsc_Union__3__::user_schema_avsc_Union__3__() : idx_(0) { }
inline user_schema_avsc_Union__4__::user_schema_avsc_Union__4__() : idx_(0) { }
inline user_schema_avsc_Union__5__::user_schema_avsc_Union__5__() : idx_(0) { }
inline user_schema_avsc_Union__6__::user_schema_avsc_Union__6__() : idx_(0) { }
inline user_schema_avsc_Union__7__::user_schema_avsc_Union__7__() : idx_(0) { }
inline user_schema_avsc_Union__8__::user_schema_avsc_Union__8__() : idx_(0) { }
inline user_schema_avsc_Union__9__::user_schema_avsc_Union__9__() : idx_(0) { }
inline user_schema_avsc_Union__10__::user_schema_avsc_Union__10__() : idx_(0) { }
}
namespace avro {
template<> struct codec_traits<c::user_schema_avsc_Union__0__> {
    static void encode(Encoder& e, c::user_schema_avsc_Union__0__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_int());
            break;
        }
    }
    static void decode(Decoder& d, c::user_schema_avsc_Union__0__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                int32_t vv;
                avro::decode(d, vv);
                v.set_int(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<c::user_schema_avsc_Union__1__> {
    static void encode(Encoder& e, c::user_schema_avsc_Union__1__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_string());
            break;
        }
    }
    static void decode(Decoder& d, c::user_schema_avsc_Union__1__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                std::string vv;
                avro::decode(d, vv);
                v.set_string(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<c::user_schema_avsc_Union__2__> {
    static void encode(Encoder& e, c::user_schema_avsc_Union__2__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_string());
            break;
        }
    }
    static void decode(Decoder& d, c::user_schema_avsc_Union__2__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                std::string vv;
                avro::decode(d, vv);
                v.set_string(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<c::user_schema_avsc_Union__3__> {
    static void encode(Encoder& e, c::user_schema_avsc_Union__3__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_float());
            break;
        }
    }
    static void decode(Decoder& d, c::user_schema_avsc_Union__3__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                float vv;
                avro::decode(d, vv);
                v.set_float(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<c::user_schema_avsc_Union__4__> {
    static void encode(Encoder& e, c::user_schema_avsc_Union__4__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_string());
            break;
        }
    }
    static void decode(Decoder& d, c::user_schema_avsc_Union__4__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                std::string vv;
                avro::decode(d, vv);
                v.set_string(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<c::user_schema_avsc_Union__5__> {
    static void encode(Encoder& e, c::user_schema_avsc_Union__5__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_string());
            break;
        }
    }
    static void decode(Decoder& d, c::user_schema_avsc_Union__5__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                std::string vv;
                avro::decode(d, vv);
                v.set_string(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<c::Whatever> {
    static void encode(Encoder& e, const c::Whatever& v) {
        avro::encode(e, v.name);
    }
    static void decode(Decoder& d, c::Whatever& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.name);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.name);
        }
    }
};

template<> struct codec_traits<c::user_schema_avsc_Union__6__> {
    static void encode(Encoder& e, c::user_schema_avsc_Union__6__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_Whatever());
            break;
        }
    }
    static void decode(Decoder& d, c::user_schema_avsc_Union__6__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                c::Whatever vv;
                avro::decode(d, vv);
                v.set_Whatever(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<c::user_schema_avsc_Union__7__> {
    static void encode(Encoder& e, c::user_schema_avsc_Union__7__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_array());
            break;
        }
    }
    static void decode(Decoder& d, c::user_schema_avsc_Union__7__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                std::vector<c::user_schema_avsc_Union__6__ > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<c::Facility> {
    static void encode(Encoder& e, const c::Facility& v) {
        avro::encode(e, v.name);
        avro::encode(e, v.cost);
        avro::encode(e, v.returnedDate);
        avro::encode(e, v.whatevers);
    }
    static void decode(Decoder& d, c::Facility& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.name);
                    break;
                case 1:
                    avro::decode(d, v.cost);
                    break;
                case 2:
                    avro::decode(d, v.returnedDate);
                    break;
                case 3:
                    avro::decode(d, v.whatevers);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.name);
            avro::decode(d, v.cost);
            avro::decode(d, v.returnedDate);
            avro::decode(d, v.whatevers);
        }
    }
};

template<> struct codec_traits<c::user_schema_avsc_Union__8__> {
    static void encode(Encoder& e, c::user_schema_avsc_Union__8__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_Facility());
            break;
        }
    }
    static void decode(Decoder& d, c::user_schema_avsc_Union__8__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                c::Facility vv;
                avro::decode(d, vv);
                v.set_Facility(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<c::user_schema_avsc_Union__9__> {
    static void encode(Encoder& e, c::user_schema_avsc_Union__9__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_map());
            break;
        }
    }
    static void decode(Decoder& d, c::user_schema_avsc_Union__9__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                std::map<std::string, c::user_schema_avsc_Union__8__ > vv;
                avro::decode(d, vv);
                v.set_map(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<c::User> {
    static void encode(Encoder& e, const c::User& v) {
        avro::encode(e, v.age);
        avro::encode(e, v.name);
        avro::encode(e, v.facilities);
    }
    static void decode(Decoder& d, c::User& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.age);
                    break;
                case 1:
                    avro::decode(d, v.name);
                    break;
                case 2:
                    avro::decode(d, v.facilities);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.age);
            avro::decode(d, v.name);
            avro::decode(d, v.facilities);
        }
    }
};

template<> struct codec_traits<c::user_schema_avsc_Union__10__> {
    static void encode(Encoder& e, c::user_schema_avsc_Union__10__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_User());
            break;
        }
    }
    static void decode(Decoder& d, c::user_schema_avsc_Union__10__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                c::User vv;
                avro::decode(d, vv);
                v.set_User(vv);
            }
            break;
        }
    }
};

}
#endif

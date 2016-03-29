///////////////////////////////////////////////////////////////////////////////
// Copyright 2005 Daniel Wallin.
// Copyright 2005 Joel de Guzman.
// Copyright 2015 John Fletcher
//
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
// This is based on is_std_hash_map.hpp which was
// modeled after range_ex, Copyright 2004 Eric Niebler
///////////////////////////////////////////////////////////////////////////////
//
// is_unordered_set_or_map.hpp
//
/////////////////////////////////////////////////////////////////////////////

// Definitions of overloads for the use of find with unordered types.

#ifndef BOOST_PHOENIX_IS_STD_UNORDERED_SET_OR_MAP
#define BOOST_PHOENIX_IS_STD_UNORDERED_SET_OR_MAP

#include <boost/mpl/bool.hpp>
#include "./std_unordered_set_or_map_fwd.hpp"

#ifdef BOOST_PHOENIX_HAS_UNORDERED_SET_AND_MAP

namespace network_boost
{
    template<class T>
    struct is_std_unordered_set
        : network_boost::mpl::false_
    {};

    template<class T>
    struct is_std_unordered_multiset
        : network_boost::mpl::false_
    {};

    template<class T>
    struct is_std_unordered_map
        : network_boost::mpl::false_
    {};

    template<class T>
    struct is_std_unordered_multimap
        : network_boost::mpl::false_
    {};

    template<
        class Kty
      , class Hash
      , class Cmp
      , class Alloc
    >
    struct is_std_unordered_set< std::unordered_set<Kty,Hash,Cmp,Alloc> >
        : network_boost::mpl::true_
    {};

    template<
        class Kty
      , class Hash
      , class Cmp
      , class Alloc
    >
    struct is_std_unordered_multiset< std::unordered_multiset<Kty,Hash,Cmp,Alloc> >
        : network_boost::mpl::true_
    {};

    template<
        class Kty
      , class Ty
      , class Hash
      , class Cmp
      , class Alloc
    >
    struct is_std_unordered_map< std::unordered_map<Kty,Ty,Hash,Cmp,Alloc> >
        : network_boost::mpl::true_
    {};

    template<
        class Kty
      , class Ty
      , class Hash
      , class Cmp
      , class Alloc
    >
    struct is_std_unordered_multimap< std::unordered_multimap<Kty,Ty,Hash,Cmp,Alloc> >
        : network_boost::mpl::true_
    {};

    template<
        class Kty
      , class Hash
      , class Cmp
      , class Alloc
    >
    struct has_find< std::unordered_set<Kty,Hash,Cmp,Alloc> >
        : network_boost::mpl::true_
    {
    };

    template<
        class Kty
      , class Hash
      , class Cmp
      , class Alloc
    >
    struct has_find< std::unordered_multiset<Kty,Hash,Cmp,Alloc> >
        : network_boost::mpl::true_
    {
    };
    
    template<
        class Kty
      , class Ty
      , class Hash
      , class Cmp
      , class Alloc
    >
    struct has_find< std::unordered_map<Kty,Ty,Hash,Cmp,Alloc> >
        : network_boost::mpl::true_
    {
    };
 
    template<
        class Kty
      , class Ty
      , class Hash
      , class Cmp
      , class Alloc
    >
    struct has_find< std::unordered_multimap<Kty,Ty,Hash,Cmp,Alloc> >
        : network_boost::mpl::true_
    {
    };
  
   
}

#endif


#endif
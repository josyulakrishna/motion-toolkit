/*  Guts - Generic Utilities 
    Copyright (c) 2006 Gino van den Bergen, DTECTA

    Source published under the terms of the MIT License. 
    For details please see COPYING file or visit 
    http://opensource.org/licenses/MIT
*/

#ifndef GUTS_SET_HPP
#define GUTS_SET_HPP

#include <set>
#include "Allocator.hpp"

namespace guts
{
    template <typename Key, typename Compare = std::less<Key>>
    struct Set
    {
        typedef std::set<Key, Compare, Allocator<Key> > RT;
    };
    
    template <typename Key, typename Compare = std::less<Key>>
    struct Multiset
    {
        typedef std::multiset<Key, Compare, Allocator<Key> > RT;
    };
	
#if (__cplusplus >= 201103L) || (_MSC_VER >= 1800)
	
	template <typename Key, typename Compare = std::less<Key>>
	using set = std::set<Key, Compare, Allocator<Key>>;

	template <typename Key, typename Compare = std::less<Key>>
	using multiset = std::multiset<Key, Compare, Allocator<Key>>;

#endif
}

#endif

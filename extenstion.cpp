#ifndef _EXTENSION_
#define _EXTENSION_
#include <bits/stdc++.h>
#define oo INT32_MAX;
template <class T1, class T2>
std::ostream &operator<<(std::ostream &out_stream, const std::pair<T1, T2> p)
{
    out_stream << "(" << p.first << ", " << p.second << ")";
    return out_stream;
}

template <class T>
std::ostream &operator<<(std::ostream &out_stream, const std::vector<T> &data)
{
    out_stream << "[";
    for (typename std::vector<T>::const_iterator itr = data.begin(); itr != data.end(); ++itr)
        out_stream << *itr << (itr != --data.end() ? ", " : "");
    out_stream << "]" << std::endl;
    return out_stream;
}

template <class T>
std::ostream &operator<<(std::ostream &out_stream, const std::list<T> &data)
{
    out_stream << "[";
    for (typename std::list<T>::const_iterator itr = data.begin(); itr != data.end(); ++itr)
        out_stream << *itr << (itr != --data.end() ? ", " : "");
    out_stream << "]" << std::endl;
    return out_stream;
}

template <class T1, class T2>
std::ostream &operator<<(std::ostream &out_stream, const std::unordered_map<T1, T2> &data)
{
    out_stream << "[";
    for (typename std::unordered_map<T1, T2>::const_iterator itr = data.begin(); itr != data.end(); ++itr)
        out_stream << itr->first << " : " << itr->second << (itr != --data.end() ? ", " : "");
    out_stream << "]" << std::endl;
    return out_stream;
}

template <class T1, class T2>
std::ostream &operator<<(std::ostream &out_stream, const std::map<T1, T2> &data)
{
    out_stream << "[";
    for (typename std::map<T1, T2>::const_iterator itr = data.begin(); itr != data.end(); ++itr)
        out_stream << itr->first << " : " << itr->second << (itr != --data.end() ? ", " : "");
    out_stream << "]" << std::endl;
    return out_stream;
}

template <typename functor, typename iteration>
iteration map_function(functor f, const iteration list_data)
{
    iteration return_list = list_data;
    for (typename iteration::iterator itr = return_list.begin(); itr != return_list.end(); ++itr)
        *itr = f(*itr);
    return return_list;
}

std::vector<std::string> split(std::string s, const std::string delimiter)
{
    std::vector<std::string> result;
    size_t position = s.find(delimiter);
    while (position != std::string::npos)
    {
        result.push_back(s.substr(0, position));
        s = s.erase(0, position + 1);
        position = s.find(delimiter);
    }
    result.push_back(s);
    return result;
}
#endif // !1
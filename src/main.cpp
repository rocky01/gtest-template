#include <iostream>
#include <boost/bimap.hpp>

typedef boost::bimap< int, std::string > bm_type;

template< class MapType >
void print_map(const MapType & m)
{
    typedef typename MapType::const_iterator const_iterator;
    for( const_iterator iter = m.begin(), iend = m.end(); iter != iend; ++iter )
    {
        std::cout << iter->first << "-->" << iter->second << std::endl;
    }
}

int main() {
    bm_type bm;

    bm.insert( bm_type::value_type(1, "one" ) );
    bm.insert( bm_type::value_type(2, "two" ) );

    std::cout << "There are " << bm.size() << " relations" << std::endl;

    print_map( bm.left  );
    print_map( bm.right );

    return 0;
}
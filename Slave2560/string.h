/*
 * string.h
 *
 * Created: 7/26/2018 8:26:39 PM
 *  Author: ETAStaff
 */


#ifndef STRING_H_
#define STRING_H_

class String {
	public:
		String( const char *cstr );
		String( char *cstr );
		String( const String& str );
		String( int8_t s8 );
		String( uint8_t u8 );
		String( int16_t s16 );
		String( uint16_t u16 );
		String( int32_t s32 );
		String( uint32_t u32 );
		String( int64_t s64 );
		String( uint64_t u64 );
		String( float f32 );
		operator const char*() const;

		bool operator==( const String &str ) const;
		bool operator!=( const String &str ) const;
		bool operator==( int64_t num ) const;
		bool operator==( int32_t num ) const;
		bool operator==( int16_t num ) const;
		bool operator==( int8_t num ) const;
		bool operator==( uint64_t num ) const;
		bool operator==( uint32_t num ) const;
		bool operator==( uint16_t num ) const;
		bool operator==( uint8_t num ) const;

		size_t size( void ) const;
		String operator+( const String &str ) const;
		String operator+( const char *cstr ) const;

		String &operator+=( const String &str );
		String &operator+=( const char *cstr );
		String &append( const char *cstr );
		String &append( const String &str );
		String &operator^( bool upper );
		String &toUpper( void );
		String &toLower( void );
		String &remove( const char *cstr );
		String &operator-=( const char *cstr );
		String &remove( const String &str );
		String &operator-=( const String &str );
		String &prepend( const char *cstr );
		String &prepend( const String &str );
	protected:
	private:
		const char *_array;
};



#endif /* STRING_H_ */
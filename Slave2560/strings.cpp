#include "strings.h"


String::String( const char *cstr ) {
	
}

String::String( char *cstr ) {
	
}

String::String( const String& str ) {
	
}

String::String( int8_t s8 ) {
	
}

String::String( uint8_t u8 ) {
	
}

String::String( int16_t s16 ) {
	
}

String::String( uint16_t u16 ) {
	
}

String::String( int32_t s32 ) {
	
}

String::String( uint32_t u32 ) {
	
}

String::String( int64_t s64 ) {
	
}

String::String( uint64_t u64 ) {
	
}

String::String( float f32 ) {
	
}

String::operator const char*() const {
	
}


bool String::operator==( const String &str ) const {
	
}

bool String::operator!=( const String &str ) const {
	
}

bool String::operator==( int64_t num ) const {
	
}

bool String::operator==( int32_t num ) const {
	
}

bool String::operator==( int16_t num ) const {
	
}

bool String::operator==( int8_t num ) const {
	
}

bool String::operator==( uint64_t num ) const {
	
}

bool String::operator==( uint32_t num ) const {
	
}

bool String::operator==( uint16_t num ) const {
	
}

bool String::operator==( uint8_t num ) const {
	
}


uint32_t String::size( void ) const {
	
}

String String::operator+( const String &str ) const {
	
}

String String::operator+( const char *cstr ) const {
	
}


String &operator+=( const String &str ) {
	
}

String &operator+=( const char *cstr ) {
	
}

String &append( const char *cstr ) {
	
}

String &append( const String &str ) {
	
}

String &operator^( bool upper ) {
	
}

String &toUpper( void ) {
	
}

String &toLower( void ) {
	
}

String &remove( const char *cstr ) {
	
}

String &operator-=( const char *cstr ) {
	
}

String &remove( const String &str ) {
	
}

String &operator-=( const String &str ) {
	
}

String &prepend( const char *cstr ) {
	
}

String &prepend( const String &str ) {
	
}

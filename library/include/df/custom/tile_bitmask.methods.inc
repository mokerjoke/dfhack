inline uint16_t &operator[] (int y)
{
    return bits[y];
}
void clear()
{
    memset(bits,0,sizeof(bits));
}
void set_all()
{
    memset(bits,0xFF,sizeof(bits));
}
inline bool getassignment( const df::coord2d &xy )
{
    return getassignment(xy.x,xy.y);
}
inline bool getassignment( int x, int y )
{
    return (bits[y] & (1 << x));
}
inline void setassignment( const df::coord2d &xy, bool bit )
{
    return setassignment(xy.x,xy.y, bit);
}
inline void setassignment( int x, int y, bool bit )
{
    if(bit)
        bits[y] |= (1 << x);
    else
        bits[y] &= ~(1 << x);
}
bool has_assignments()
{
    for (int i = 0; i < 16; i++)
        if (bits[i])
            return true;
    return false;
}

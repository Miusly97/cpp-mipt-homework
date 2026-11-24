#include <iostream>

struct Vector2f 
{
    float x;
    float y;

    Vector2f operator+(const Vector2f& b) const 
    {
        return {x + b.x, y + b.y};
    }

    Vector2f operator-(const Vector2f& b) const 
    {
        return {x - b.x, y - b.y};
    }

    Vector2f operator*(float n) const 
    {
        return {x * n, y * n};
    }

    float operator*(const Vector2f& b) const 
    {
        return x * b.x + y * b.y;
    }

    Vector2f operator-() const 
    {
        return {-x, -y};
    }

    Vector2f operator+() const 
    {
        return *this;
    }

    bool operator==(const Vector2f& b) const 
    {
        return (x == b.x) && (y == b.y);
    }

    bool operator!=(const Vector2f& b) const 
    {
        return !(*this == b);
    }

    Vector2f& operator+=(const Vector2f& b) 
    {
        x += b.x;
        y += b.y;
        return *this;
    }

    Vector2f& operator-=(const Vector2f& b) 
    {
        x -= b.x;
        y -= b.y;
        return *this;
    }

    Vector2f& operator*=(float n) 
    {
        x *= n;
        y *= n;
        return *this;
    }
};

Vector2f operator*(float n, const Vector2f& v) 
{
    return v * n; 
}

std::ostream& operator<<(std::ostream& out, const Vector2f& v) 
{
    out << "(" << v.x << ", " << v.y << ")";
    return out;
}

std::istream& operator>>(std::istream& in, Vector2f& v) 
{
    in >> v.x >> v.y;
    return in;
}
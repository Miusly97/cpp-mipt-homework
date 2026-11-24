#include <iostream>
#include <cmath>
#include "point.hpp" 

class Circle 
{
private:
    Point center;
    float radius;

public:

    Circle(const Point& center, float radius) 
    {
        this->center = center;
        setRadius(radius); 
    }

    Circle() 
    {
        center = {0.0, 0.0};
        radius = 1.0;
    }

    Circle(const Circle& circle) 
    {
        center = circle.center;
        radius = circle.radius;
    }

    Point getCenter() const { return center; }
    
    void setCenter(const Point& center) { this->center = center; }

    float getRadius() const { return radius; }
    
    void setRadius(float radius) 
    {
        if (radius < 0) 
            this->radius = 0;
        else 
            this->radius = radius;
    }

    float area() const 
    {
        return M_PI * radius * radius; 
    }

    float distance(const Point& p) const 
    {
        float dx = p.x - center.x;
        float dy = p.y - center.y;
        float distToCenter = std::sqrt(dx*dx + dy*dy);
        
        return std::abs(distToCenter - radius);
    }

    bool isColliding(const Circle& c) const 
    {
        float dx = c.center.x - center.x;
        float dy = c.center.y - center.y;
        float distToCenter = std::sqrt(dx*dx + dy*dy);
        
        return (distToCenter < radius + c.radius) && (distToCenter > std::abs(radius - c.radius));
    }

    void move(const Point& p) 
    {
        center.x += p.x;
        center.y += p.y;
    }
};
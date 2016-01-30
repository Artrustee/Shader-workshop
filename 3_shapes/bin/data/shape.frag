#version 120

//uniform float width;
//uniform float height;
//uniform float time;
uniform vec2 mousePos;



void main( void )
{
    float w = 1024;
    float h = 768;
    
    float red = mousePos.x/w;
    float green = mousePos.y/h;
    float blue = abs(sin(mousePos.x * mousePos.y));
//    float blue = 1.0;
    vec3 color;
    
    color = vec3(red,green,blue);
    
    
//    gl_FragColor = vec4(1.0,0.2,1.0,1.0);
    gl_FragColor = vec4(color, 1.0);
}


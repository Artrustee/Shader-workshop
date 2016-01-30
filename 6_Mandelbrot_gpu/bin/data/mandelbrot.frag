#version 120

//uniform float width;
//uniform float height;
uniform int irr;
uniform vec2 mousePos;
uniform vec2 u_resolution;


bool mandelbrot(vec2 q) {
    vec2 z = vec2(0.0, 0.0);

    for(int i=0; i<=irr; ++i) {
        z = vec2(z.x * z.x - z.y * z.y, 2.0 * z.x * z.y) + q;
    }
    return length(z) < 2.0;
}

void main() {

    vec2 q = 2.0 * (gl_FragCoord.xy / u_resolution)-vec2(1.0,1.0);
    q.x *= u_resolution.x / u_resolution.y;
    q.x -= 0.5;
    
    vec4 color = vec4(0,0,0,1);
    if(mandelbrot(q)) {
        color = vec4(1,1,1,1);
    }
    gl_FragColor = color;
}

//later I will make a animated version of M-set,which will demenstrate the advantages of shaders :)

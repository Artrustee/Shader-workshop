#version 120

uniform float time;
uniform vec2 Resolution;

void main(){
    vec3 c;
    float l,z=time;
    for(int i=0 ;i<3 ;i++) {
        vec2 uv,p=gl_FragCoord.xy/Resolution;
        uv = p;
        p -=.5;
        p.x *= Resolution.x/Resolution.y;
        z += .07;
        l = length(p);
        uv += p/l*(sin(z)+1.)*abs(sin(l*9.-z*2.));
        c[i] = .01/length(abs(mod(uv,1.)-.5));
    }
    gl_FragColor=vec4(c/l,time);
}
#include <mbed.h>
#include <MCP23008.hpp>
MCP23008 mcp(PB_7, PB_6, 0);
int main() {

    // put your setup code here, to run once:
    mcp.set_output_pins(0x01);
    while(1) {
        // put your main code here, to run repeatedly:
        mcp.write_outputs(0x01);
        wait(0.5);
        mcp.write_outputs(0x00);
        wait(0.5);
    }
}

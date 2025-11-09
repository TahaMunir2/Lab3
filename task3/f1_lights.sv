module f1_lights #(
    parameter WIDTH=16
)(
    input logic [WIDTH-1:0] N,
    input logic en,
    input logic rst,
    input logic clk,
    output logic [7:0] data_out 
);

logic flash;

clktick clktick(
    .clk(clk),
    .rst(rst),
    .en (en),
    .N (N),
    .tick(flash)
);

f1_fsm f1_fsm(
    .en(flash),
    .rst (rst),
    .clk (clk),
    .data_out(data_out)
);

endmodule
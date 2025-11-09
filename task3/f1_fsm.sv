module f1_fsm (
    input   logic       rst,
    input   logic       en,
    input   logic       clk,
    output  logic [7:0] data_out
);

    typedef enum {s0, s1, s2, s3, s4, s5, s6, s7, s8} my_state;
        my_state current_state, next_state;
        
    always_ff @(posedge clk, posedge rst)
        if (rst) current_state <= s0;
        else if (en)     current_state <= next_state;

    always_comb 
        case(current_state)
            s0: next_state = s1;
            s1: next_state = s2;
            s2: next_state = s3;
            s3: next_state = s4;
            s4: next_state = s5;
            s5: next_state = s6;
            s6: next_state = s7;
            s7: next_state = s8;
            s8: next_state = s0;
            default: next_state = s0;
        endcase
    
    always_comb
        case(current_state)
                s0: data_out = 8'b00000000;
                s1: data_out = 8'b00000001;
                s2: data_out = 8'b00000011;
                s3: data_out = 8'b00000111;
                s4: data_out = 8'b00001111;
                s5: data_out = 8'b00011111;
                s6: data_out = 8'b00111111;
                s7: data_out = 8'b01111111;
                s8: data_out = 8'b11111111;
                default: data_out = 8'b00000000;
        endcase

endmodule

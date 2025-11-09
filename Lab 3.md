Task 0:

Testing out the correct function gave us:
![[Screenshot 2025-11-09 at 21.33.56.png]]

![[Screenshot 2025-10-30 at 18.49.55.png]]

With incorrect behaviour:

![[Screenshot 2025-11-09 at 21.34.45.png]]

![[Screenshot 2025-10-30 at 18.50.07.png]]


Task 1:

Then I created a 4 bit left shift register 4 bit:

![[Screenshot 2025-11-09 at 21.35.14.png]]

![[Screenshot 2025-10-30 at 18.52.01.png]]


Then I created a 7 bit one:

![[Screenshot 2025-11-09 at 21.35.39.png]]

![[Screenshot 2025-10-30 at 19.13.05.png]]


 Task 2:
 ![[Screenshot 2025-11-09 at 21.31.46.png]]

And it worked in simulation:
 ![[Screenshot 2025-10-30 at 19.24.45.png]]

And then I had to write a testbench to test it out.

![[Screenshot 2025-11-09 at 21.33.06.png]]

![[WhatsApp Video 2025-11-09 at 21.31.01.mp4]]


Task 3:

I synchronised my lights to an online metronome to find the N value to calibrate the Verilator simulation.

![[WhatsApp Video 2025-11-09 at 22.13.25.mp4]]

And then created the follow circuit in SV:

![[Pasted image 20251109222333.png]]


![[Screenshot 2025-11-09 at 22.22.23.png]]

And write a testbench of test out if the lights on the Vbuddy were in sync with 60 bpm
![[Screenshot 2025-11-09 at 22.30.16.png]]

Which they indeed were:

![[WhatsApp Video 2025-11-09 at 22.31.27.mp4]]
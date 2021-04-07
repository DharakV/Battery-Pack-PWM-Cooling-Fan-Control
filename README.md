# Battery-Pack-PWM-Cooling-Fan-Control
Custom PWM and Interrupt library written for the MAC EV MK.I
This library can be utilized anywhere, but is specifically written to control the cooling fans and pumps for our battery pack.

![VCU overview](https://user-images.githubusercontent.com/36899160/113805200-f4f88580-9714-11eb-81c5-e8808be9dc4a.png)

In this high level overview of the entire Vehicle-Control-Unit ('VCU'), the 'PWM Module' acts as a generic module which can be configured to a range of times and duty cycles. We can also utilize it to trigger Interrupts if desired, for applications such as critical safety sensor signal loss or irregular pedal inputs. 


Imported from team repo on GitLab, written by Dharak Verma.

// 函数: sub_48e724
// 地址: 0x48e724
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

long double x87_r7_1 =
    float.t((zx.d(sub_4079a0(arg2)) - zx.d(sub_4079a0(arg3))) * arg1) / float.t(arg4)
char eax_9
int16_t x87control
int16_t x87control_1
eax_9, x87control_1 = sub_40337c(x87control, float.t(zx.d(sub_4079a0(arg3))) + x87_r7_1)
long double x87_r7_5 =
    float.t((zx.d(sub_40799c(arg2)) - zx.d(sub_40799c(arg3))) * arg1) / float.t(arg4)
char eax_19
int16_t x87control_2
eax_19, x87control_2 = sub_40337c(x87control_1, float.t(zx.d(sub_40799c(arg3))) + x87_r7_5)
return sub_407968(
    sub_40337c(x87control_2, 
        float.t(zx.d(arg3.b)) + float.t((zx.d(arg2.b) - zx.d(arg3.b)) * arg1) / float.t(arg4)), 
    eax_19, eax_9)

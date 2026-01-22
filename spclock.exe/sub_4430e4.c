// 函数: sub_4430e4
// 地址: 0x4430e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp_1 = &var_8

if (arg2.b != 0)
    void var_18
    esp_1 = &var_18
    int32_t ecx
    arg1 = sub_403fcc(ecx, arg2)

sub_461980(arg1, 0)
arg1[0x14] = 0x808eb

if (sub_465ac4(sub_4659bc()) != 0)
    arg1[0x14] = 0xffffffbf & (arg1[0x14] | 0x40000)

sub_456ec8(arg1, 0xb9)
sub_456efc(arg1, 0x29)
arg1[0x9a].b = 2
*(arg1 + 0x269) = 2
sub_44356c(arg1, 2)
sub_443588(arg1, 1)
arg1[0x99].b = 0
sub_457978(arg1, 0xff00000f)
*(arg1 + 0x265) = 1
int32_t edx_3
char ebx_2
edx_3, ebx_2 = sub_45fbb8(arg1, 1)
edx_3.b = 1
(*(*arg1 + 0xc8))()

if (ebx_2 != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1 = &esp_1[4]

*esp_1
esp_1[1]
return arg1

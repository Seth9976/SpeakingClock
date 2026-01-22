// 函数: sub_498d39
// 地址: 0x498d39
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* result
int32_t ecx_4
int32_t edx_3
int32_t ebx
result, edx_3, ecx_4 = (*(ebx - 0x3d))()
int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = ecx_4
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* esp = &var_10

if (edx_3.b != 0)
    void var_20
    esp = &var_20
    result = sub_403fcc(ecx_4, edx_3)

var_8:3.b = edx_3.b
sub_491920(result, 0)
int32_t edx
edx.b = 1
int32_t* eax_1
int32_t edx_1
eax_1, edx_1 = sub_497274(sub_496b6d+0x4f, edx)
result[0x12] = eax_1
edx_1.b = 1
int32_t* eax_2
int32_t ecx_2
eax_2, ecx_2 = sub_497cd8(sub_497823+0x139, edx_1)
result[0x14] = eax_2
sub_497cd0(eax_2, result[0x12])
int32_t edx_2
edx_2.b = 1
result[0x13] = sub_403c38(ecx_2, edx_2)

if (var_8:3.b != 0)
    sub_404024(result)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
esp[3]
return result

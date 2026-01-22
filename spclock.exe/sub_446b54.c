// 函数: sub_446b54
// 地址: 0x446b54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_14 = sub_41ae58(arg1)
sub_405e6c()
int32_t* result = sub_41ae58(arg1)

if (result - 1 s>= 0)
    void* edi_2 = result
    int32_t ebx_1 = 0
    void* i
    
    do
        int32_t* eax_6
        int32_t* ebp_1
        eax_6, ebp_1 = sub_446a18(sub_446bbc(arg1, ebx_1))
        *(*ebp_1 + (ebx_1 << 3)) = eax_6
        int32_t* ebp_2
        result, ebp_2 = sub_446ac4(sub_446bbc(arg1, ebx_1))
        *(*ebp_2 + (ebx_1 << 3) + 4) = result
        ebx_1 += 1
        i = edi_2
        edi_2 -= 1
    while (i != 1)

return result

// 函数: sub_424a14
// 地址: 0x424a14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4b19f4 == 0)
    int32_t* eax_1 = VirtualAlloc(nullptr, 0x1000, MEM_COMMIT, PAGE_EXECUTE_READWRITE)
    *eax_1 = data_4b19f0
    sub_4030d0(0x4aac04, &eax_1[1], 2)
    *(eax_1 + 6) = sub_424a0c(eax_1 + 5, sub_4249ec)
    void* ebx_1 = eax_1 + 0xa
    
    do
        *ebx_1 = 0xe8
        *(ebx_1 + 1) = sub_424a0c(ebx_1, &eax_1[1])
        *(ebx_1 + 5) = data_4b19f4
        data_4b19f4 = ebx_1
        ebx_1 += 0xd
    while (ebx_1 - eax_1 s< 0xffc)
    
    data_4b19f0 = eax_1

int32_t result = data_4b19f4
void* ebx_2 = data_4b19f4
data_4b19f4 = *(ebx_2 + 5)
*(ebx_2 + 5) = arg1
*(ebx_2 + 9) = arg2
return result

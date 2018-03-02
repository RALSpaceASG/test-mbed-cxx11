// A C++11 Hello World

int main(int argc, char** argv)
{
        // static_assert is new to C++11
        // this assert will always fail at compile-time,
        // resulting in the "Hello, World" message.
	static_assert(false, "Hello, World!");
}

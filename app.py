if __name__ == "__main__":
    with open("/proc/hl_proc") as f:
        data = f.read()
        print(data)
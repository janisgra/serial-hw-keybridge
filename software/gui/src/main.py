import tkinter as tk
from tkinter import messagebox

class SerialHWKeybridgeGUI:
    def __init__(self, master):
        self.master = master
        master.title("Serial HW Keybridge")

        self.label = tk.Label(master, text="Welcome to Serial HW Keybridge GUI")
        self.label.pack()

        self.start_button = tk.Button(master, text="Start", command=self.start)
        self.start_button.pack()

        self.quit_button = tk.Button(master, text="Quit", command=master.quit)
        self.quit_button.pack()

    def start(self):
        messagebox.showinfo("Info", "Starting the Serial HW Keybridge...")

if __name__ == "__main__":
    root = tk.Tk()
    gui = SerialHWKeybridgeGUI(root)
    root.mainloop()
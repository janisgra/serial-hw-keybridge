# main.py

import argparse

def main():
    parser = argparse.ArgumentParser(description='Serial Hardware Keybridge CLI Tool')
    parser.add_argument('--version', action='version', version='%(prog)s 1.0', help='Show the version of the tool')
    parser.add_argument('--config', type=str, help='Path to the configuration file')
    parser.add_argument('--verbose', action='store_true', help='Enable verbose output')

    args = parser.parse_args()

    if args.verbose:
        print("Verbose mode enabled")

    if args.config:
        print(f"Using configuration file: {args.config}")

    # Main functionality goes here
    print("Starting Serial Hardware Keybridge...")

if __name__ == '__main__':
    main()
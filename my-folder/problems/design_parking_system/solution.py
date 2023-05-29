class ParkingSystem:
    def __init__(self, big, medium, small):
        self.slots = [big, medium, small]

    def addCar(self, carType):
        if self.slots[carType - 1] > 0:
            self.slots[carType - 1] -= 1
            return True
        else:
            return False

parking = ParkingSystem(3, 4, 2)
# Your ParkingSystem object will be instantiated and called as such:
# obj = ParkingSystem(big, medium, small)
# param_1 = obj.addCar(carType)